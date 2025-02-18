#include <stdio.h>
#include <string.h>

/*
 * Return the result of appending the characters in s2 to s1.
 * Assumption: enough space has been allocated for s1 to store the extra
 * characters.
 */

/* 
 * DO NOT change the definition of the append function when it comes to 
 * adding/removing/modifying the function parameters, or changing its return 
 * type. You may, however, modify the body of the function if you wish.
 */
char* append(char s1[], char s2[]) {
    int s1len = strlen(s1);
    int s2len = strlen(s2);
    int k;
    for (k = 0; k < s2len; k++) {
        s1[k + s1len] = s2[k];
    }
    s1[s1len + s2len] = '\0';
    return s1;
}

/* 
 * DO NOT MODIFY unless when you run this, your code fails to grab input with spaces,
 * in which case, comment the lines with the scanf and uncomment the line below them
 * to fix this problem.
 */
int main() {
    char str1[10]; 
    char str2[10];
    while (1) {
        printf("str1 = ");
        fgets(str1, sizeof(str1), stdin); // Gets a whole line of strings entered in terminal.
        str1[strcspn(str1, "\n")] = 0; // Deletes new line character
        // if (!gets(str1)) return 0;
        printf("str2 = ");
        fgets(str2, sizeof(str2), stdin); // Gets a whole line of strings entered in terminal.
        str2[strcspn(str2, "\n")] = 0; // Deletes new line character
        // if (!gets(str2)) return 0;

        printf ("The result of appending str2 to str1 is %s.\n", append(str1, str2));
        fflush(stdin);
    }
    return 0;
}
