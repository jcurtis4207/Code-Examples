#include <stdio.h>
void traverse(int *ptr, int length);
void sum(int array[], int length);

int main(){
	// create arrays
	int arr1[5];
	int arr2[5] = {1,2,3,4,5};
	int length = sizeof(arr2)/sizeof(arr2[0]);

	// create pointer
	int *ptr = arr2;	//or int *ptr = &arr2[0]

	// pass as parameters
	traverse(ptr, length);
	sum(arr2, length);
	return 0;
}

// traverse array and print each element
void traverse(int *ptr, int length){
	int i;
	for(i = 0; i < length; i++){
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	return;
}

// find sum of all array elements
void sum(int array[], int length){
	int i;
	int sum = 0;
	for(i = 0; i < length; i++){
		sum += array[i];
	}
	printf("%d\n", sum);
	return;
}
