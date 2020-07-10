#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define true 1
#define false 0

int BUFFER_SIZE = 5;

// mutex lock
int available;
void acquire_mutex(){
	while(!available){
		//busy waiting
	}
	available = false;
}
void release_mutex(){
	available = true;
}

// semaphores - stores number of empty/full buffers
int *empty, *full;
wait(int *S){
	while(*S <= 0){
		//busy waiting
	}
	*S = *S - 1;
}
signal(int *S){
	*S = *S + 1;
}


// producer
void produce(){
	wait(empty);
	acquire_mutex();

	// do critical section
	printf("Producer in critical section\n");

	release_mutex();
	signal(full);
	printf("Producer out of critical section\n");
	return;
}

// consumer
void consume(){
	wait(full);
	acquire_mutex();

	// do critical section
	printf("Consumer in critical section\n");

	release_mutex();
	signal(empty);
	printf("Consumer out of critical section\n");
	return;
}

// producer thread
void *producer(void *param){
	produce();
	pthread_exit(0);
}

// consumer thread
void *consumer(void *param){
	consume();
	pthread_exit(0);
}

int main(){
	// initialize locks
	available = true;
	empty = malloc(sizeof(int));
	full = malloc(sizeof(int));
	*empty = BUFFER_SIZE;
	*full = 0;

	// create threads
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_t tid0, tid1;
	pthread_create(&tid0, &attr, producer, NULL);
	pthread_create(&tid1, &attr, consumer, NULL);

	// join threads and exit
	pthread_join(tid0, NULL);
	pthread_join(tid1, NULL);
	printf("DONE\n");
	return 0;
}