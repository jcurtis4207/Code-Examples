#include <stdio.h>
#include <stdlib.h>

// define structure
struct thing{
	int number;
};

// prototypes must be below struct definition
void func(struct thing *ptr);
struct thing func2(int n);

int main(){
	// create structures
	struct thing thing1;
	struct thing *thing2 = malloc(sizeof(*thing2));

	// initialize members
	thing1.number = 5;
	thing2->number = 2;
	printf("%d %d\n", thing1.number, thing2->number);

	// pass as pointer
	func(&thing1);
	printf("%d\n", thing1.number);

	// return structure
	struct thing thing3 = func2(3);
	printf("%d\n", thing3.number);
	return 0;
}

void func(struct thing *ptr){
	// modify member via pointer
	ptr->number = 7;
	return;
}

struct thing func2(int n){
	// create structure to return
	struct thing new;
	new.number = n;
	return new;
}
