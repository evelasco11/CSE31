#include <stdio.h>

int digitsSum(int num){
    int sum = 0;
    if (num < 0){
        num = -num;
    }

    while(num > 0){
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

double averageCalculator(int sum, int count){
    return (double) sum / count;
}

void printOut(int count){
    printf("Enter the %d", count);
    if (count % 10 == 1 && count % 100 != 11){
        printf("st");
    } else if (count % 10 == 2 && count % 100 != 12){
        printf("nd");
    } else if (count % 10 == 3 && count % 100 != 13){
        printf("rd");
    } else {
        printf("th");
    }
    
    printf(" integer: ");
}

int main(){
    int evenSums = 0, oddSums = 0, evenCount = 0, oddCount = 0, totalCount = 1, input;

    while(1){
        printOut(totalCount);
        scanf("%d", &input);
        if (input == 0) {
            break;
        }

        int result = digitsSum(input);

        if (result % 2 == 0){
            evenSums += input;
            evenCount++;
        } else {
            oddSums += input;
            oddCount++;
        }
        totalCount++;
    }

    printf("\n");
    if(evenCount == 0 && oddCount == 0){
        printf("There is no average to compute.");
    }
    if (evenCount > 0){
        printf("Average of input values whose digits sum up to an even number: %.2lf\n", (double)averageCalculator(evenSums, evenCount));
    } 
    if (oddCount > 0){
        printf("Average of input values whose digits sum up to an odd number: %.2lf\n", (double)averageCalculator(oddSums, oddCount));
    }

    return 0;
}