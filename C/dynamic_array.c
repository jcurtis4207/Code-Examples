#include <stdio.h>
#include <stdlib.h>

void push(int *arr, int index, int value, int *size, int *capacity);

int main(){
	// initialize necessary variables
	int value;
	int index = 0;
	int size = 0;
	int capacity = 1;
	int *arr = malloc(capacity * sizeof(int));

	// add 5 elements in increasing value
	int i;
	for(i = 0; i < 5; i++){
		push(arr, i, i*2, &size, &capacity);
	}

	// print array
	for(i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
	return 0;
}

// add new element in 'arr' at 'index' with 'value'
void push(int *arr, int index, int value, int *size, int *capacity){
	if(*size > *capacity){
		arr = realloc(arr, sizeof(int) * (*capacity + 2));
		*capacity = *capacity + 2;
	}
	arr[index] = value;
	*size = *size + 1;
}

