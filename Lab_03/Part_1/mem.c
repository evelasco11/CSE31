#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *) malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **) malloc(1 * sizeof(int *));
	*handle = ptr;

	printf("num is: %d\n", num);
	printf("address of num is: %p\n\n", &num);

	printf("ptr is: %p\n", ptr);
	printf("&ptr is: %p\n", &ptr);
	printf("*ptr is: %d\n\n", *ptr);
	
	printf("&handle is: %p\n", &handle);
	printf("handle is: %p\n", handle);
	printf("*handle is: %p\n", *handle);
	printf("**handle is: %d\n", **handle);


	return 0;
} 

