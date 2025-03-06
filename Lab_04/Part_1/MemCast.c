#include <stdio.h>

int main() {
	int i;
	int four_ints[4];
	char* four_c;

	for(i = 0; i < 4; i++){
        four_ints[i] = 2;
	}

	printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i = 0; i < 4; i++){
        four_c[i] = 'A' + i; // ASCII value of 'A' is 65 or 0x41 in Hex.
	}
    // Add your code for the exercises here:
	printf("four_ints[0]: %x\n", four_ints[0]);
	printf("four_ints[1]: %x\n", four_ints[1]);
	printf("Address of four_ints: %p\n", (void *) &four_ints);
	printf("Address of four_c: %p\n\n", (void *) four_c);

	for (int i = 0; i < 4; i++){
		printf("The value of four_int[%d] is %x, Address: %p\n", i, four_ints[i], (void *)&four_ints[i]);
	}
	printf("\n");

	for (int i = 0; i < 4; i++){
		printf("The value of four_c[%d] is %x, Address: %p\n", i, four_c[i], (void *) &four_c[i]);
	}



	
	return 0;
}