#include <stdio.h>

int main(int argc, char *argv[]){
	// if no arguments passed
	if (argc == 1){
		printf("Usage: ./cli_args <argument>\n");
		return -1;
	}

	// parse input to integer
	int n = atoi(argv[1]);

	printf("Argument was: %d\n", n);
	return 0;
}

