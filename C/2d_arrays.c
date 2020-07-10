#include <stdio.h>

void func(int *ptr);

int main(){
	// create matrix
	int m1[3][3];
	int m2[3][3] = {{0,0,0},{1,1,1},{2,2,2}};

	// find total length - one long array
	int length = sizeof(m2) / sizeof(m2[0][0]);

	// pass as pointer
	int *ptr = &m2[0][0];
	func(ptr);
	return 0;
}

// iterate over matrix
void func(int *ptr){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", *(ptr + (i * 3) + j));
		}
		printf("\n");
	}
	return;
}
