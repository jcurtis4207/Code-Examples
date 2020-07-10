#include <stdio.h>

int main(int argc, char *argv[]){
	//check for cli argument
	if(argc == 1){
		printf("Usage: ./files <input.txt>\n");
		return -1;
	}

	// create file object
	FILE *fptr1;

	// point to file specified by cli argument in read-only
	fptr1 = fopen(argv[1],"r");

	// check for valid file
	if(fptr1 == NULL){
		printf("\'%s\' Not Found\n", argv[1]);
		return -1;
	}

	// read from file to variable 'a'
	int a;
	fscanf(fptr1, "%d", &a);
	printf("\'%d\' read from file\n", a);

	// close file object
	fclose(fptr1);

	// reopen file for writing
	fptr1 = fopen(argv[1],"w");

	// write to file from variable 'b'
	int b = 6;
	fprintf(fptr1, "%d\n", b);

	// close file object
	fclose(fptr1);

	// reopen file for appending
	fptr1 = fopen(argv[1],"a");

	// write to file from variable 'c'
	int c = 7;
	fprintf(fptr1, "%d\n", c);

	// close file object
	fclose(fptr1);

	return 0;
}
