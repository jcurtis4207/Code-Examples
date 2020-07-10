#include <stdio.h>
#include <string.h>

void print_string(char *p1, char *p2, int length);

int main(){
	// create strings
	char name[] = "Jacob";
	char *gender = "Male";

	// find lengths
	int len1 = strlen(name);
	int len2 = strlen(gender);

	// pass as parameters
	print_string(name, gender, len2);
	return 0;
}

void print_string(char *p1, char *p2, int length){
	// print as string
	printf("%s\n", p1);

	// print as array of characters
	int i;
	for(i = 0; i < length; i++){
		printf("%c", *(p2 + i));
	}
	printf("\n");
	return;
}
