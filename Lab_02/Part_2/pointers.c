#include <stdio.h>

int main(){
    int x, y, *px, *py;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    x = 1;
    y = 2;
    arr[0] = 10;

    px = &x; //pointer points to x
    py = &y; //pointer points to y

    int *ptr = arr;
    
    // printf("The value of x is: %d\n", x);
    // printf("The memory address of x is: %p\n", &x);
    // printf("The value of y is: %d\n", y);
    // printf("The memory address of y is: %p\n", &y);
    // printf("The value of arr[0] is: %d\n", arr[0]);

    // printf("*px = %d\n", *px);
    // printf("px = %p\n", px);
    // printf("*py = %d\n", *py);
    // printf("py = %p\n", py);

    for(int i = 0; i < 10; i++){
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    printf("%d \n", *arr);
    printf("%d \n", arr[0]);

    printf("%p \n", arr);
    printf("%p \n", &arr[0]);

    return 0;
}