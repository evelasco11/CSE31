#include <stdio.h>
int main() {
    
    int count;
    int typoNumber;
    printf("Enter the repetition count for the punishment phrase: ");
    while(1) {
        scanf("%d", &count);
        if (count > 0){
            break;
        }
        printf("You entered an invalid value for the repetition count! Please re-enter: ");
    }
    
    printf("\n");
    printf("Enter the line where you want to insert the typo: ");
    while (1) {
        scanf("%d", &typoNumber);
        if (typoNumber > 0 && typoNumber <= count){
            break;
        }
        printf("You entered an invalid value for the typo placement! Please re-enter: ");
    }

    printf("\n");

    for (int i = 0; i < count; i++){
        if (i == typoNumber - 1){
            printf("Cading with is C avesone!\n");
        } else {
            printf("Coding with C is awesome!\n");
        }
    };

    return 0;
}