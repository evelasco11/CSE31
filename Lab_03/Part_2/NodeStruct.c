#include <stdio.h>
#include <stdlib.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	printf("Value of Head is: %p\n", (void *) head);
    printf("Address of Head is: %p\n", (void *) &head);
    printf("Address of iValue is: %p , iValue = %d\n", (void *) &(head->iValue), head->iValue);
    printf("Address of fValue is: %p , fValue = %.2f\n", (void *) &(head->fValue), head->fValue);
	printf("Address of next is: %p , next = %p\n", (void *) &(head->next), head->next);
	
	return 0;
}