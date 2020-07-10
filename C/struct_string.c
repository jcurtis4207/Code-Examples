#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declare structure
struct thing{
	int number;
	char *name;	// string must be char pointer
};

void func(struct thing *p1);

int main(){
	// create structure
	struct thing *ptr = malloc(sizeof(struct thing));

	// initialize members
	ptr->number = 6;
	ptr->name = strdup("Hello");	//strdup automatically allocates memory
	/*	alternatively:
	ptr->name = malloc(strlen("Hello"));
	strcpy(ptr->name, "Hello");
	*/

	// print members
	printf("%d, %s\n", ptr->number, ptr->name);

	// pass structure as paramter
	func(ptr);
	return 0;
}

void func(struct thing *p1){
	// pointers work the same
	printf("%d, %s\n", p1->number, p1->name);
	return;
}

