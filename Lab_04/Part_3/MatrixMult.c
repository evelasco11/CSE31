
#include <stdio.h>
#include <stdlib.h>

int** matMult(int **a, int **b, int size) {
	// (4) Implement your matrix multiplication here. 
	// You will need to create a new matrix to store the product.
	int **c = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++){
		*(c + i) = (int*)malloc(size * sizeof(int));
		for (int j = 0; j < size; j++){
			*(*(c + i) + j) = (*(*(a + i) + j))*(*(*(b + i) + j));
		}
	}

	return c;
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("[%d]", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main() {
	int n;
	printf("Enter size of matrix (n x n):");
	scanf("%d", &n);
	int **matA, **matB, **matC;
	// (1) Define 2 (n x n) arrays (matrices). 
	matA = (int**)malloc(n * sizeof(int*));
	matB = (int**)malloc(n * sizeof(int*));

	for (int i = 0; i < n; i++){
		*(matA + i) = (int*)malloc(n * sizeof(int));
		*(matB + i) = (int*)malloc(n * sizeof(int));
		for (int j = 0; j < n; j++){
			*(*(matA + i) + j) = j+i; 
			*(*(matB + i) + j) = j+i;
		}
	}

	// (3) Call printArray to print out the 2 arrays here.
	printf("matA is:\n");
	printArray(matA, n);
	printf("\nmatB is:\n");
	printArray(matB, n);
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.
	printf("\nmatC is:\n");
	printArray(matC, n);

    return 0;
}