#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

/*
*
*
*
*  gcc threads.c -o threads -pthread
*
*
*
*/

// declare threads
void *type0(void *param);
void *type1(void *param);
void *type2(void *param);

// global array to store results
int result[3];

int main(){
	// declare thread identifiers
	pthread_t tid0, tid1, tid2;

	// declare thread attributes and set to default
	pthread_attr_t attr;
	pthread_attr_init(&attr);

	// create threads
	pthread_create(&tid0, &attr, type0, NULL);
	pthread_create(&tid1, &attr, type1, NULL);
	pthread_create(&tid2, &attr, type2, NULL);

	// parent waits for threads to complete
	pthread_join(tid0, NULL);
	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	// traverse result array
	int i;
	for(i = 0; i < 3; i++){
		printf("%d\n", result[i]);
	}
	return 0;
}

// thread 0 - finds largest number under 100 divisible by 11
void *type0(void *params){
	int i;
	int answer = 0;
	for(i = 0; i < 100; i++){
		if(i % 11 == 0){
			answer = i;
		}
	}
	result[0] = answer;
	pthread_exit(0);
}

// thread 1 - finds largest number under 100 divisible by 22
void *type1(void *params){
	int i;
	int answer = 0;
	for(i = 0; i < 100; i++){
		if(i % 22 == 0){
			answer = i;
		}
	}
	result[1] = answer;
	pthread_exit(0);
}

// thread 2 - finds largest number under 100 divisible by 33
void *type2(void *params){
	int i;
	int answer = 0;
	for(i = 0; i < 100; i++){
		if(i % 33 == 0){
			answer = i;
		}
	}
	result[2] = answer;
	pthread_exit(0);
}

