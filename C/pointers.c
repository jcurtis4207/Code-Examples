#include <stdio.h>

void func(int b, int *ptrB);

int main(){
	int a = 5;
	int *ptrA = &a;		// pointer = address of 'a'

	printf("%d\n", a);
	printf("%d\n", *ptrA);	// print contents of 'ptrA'

	// pass as parameters
	func(a, ptrA);
	return 0;
}

void func(int b, int *ptrB){
	printf("%d\n", b);
	printf("%d\n", *ptrB);
	return;
}
