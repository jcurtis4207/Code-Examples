#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define READ_END 0
#define WRITE_END 1
#define BUFF_SIZE 10

void func(int n);

int main(){
	// create pipe
	int fd[2];
	if(pipe(fd) == -1){
		printf("Pipe Failed\n");
		return -1;
	}

	// create new process
	pid_t pid, pid_child;
	pid = fork();

	// error occured
	if (pid < 0){
		printf("Fork Failed\n");
		return -1;
	}

	// child process
	else if(pid == 0){
		// get and print child pid
		pid_child = getpid();
		printf("Child's pid = %d\n", pid_child);

		// child calls function
		func(3);

		// child writes to parent via pipe
		char message[BUFF_SIZE] = "Hello";
		close(fd[READ_END]);
		write(fd[WRITE_END], message, strlen(message)+1);
		close(fd[WRITE_END]);
		exit(0);
	}

	// parent process
	else{
		// wait for child to terminate
		wait(NULL);

		// parent reads from child via pipe
		char read_message[BUFF_SIZE];
		close(fd[WRITE_END]);
		read(fd[READ_END], &read_message, BUFF_SIZE);
		close(fd[READ_END]);
		printf("Child's message: %s\n", read_message);

		// get and print pid
		pid = getpid();
		printf("Parent's pid = %d\n", pid);

		// parent calls function
		func(7);
	}
	return 0;
}

// a function to print from n to 10
void func(int n){
	int i;
	for(i = n; i < 10; i++){
		printf("%d ", i);
	}
	printf("\n");
	return;
}

