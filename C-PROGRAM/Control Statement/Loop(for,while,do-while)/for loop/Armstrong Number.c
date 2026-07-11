#include <stdio.h>

int main() {
    // Program to check if a number is Armstrong using for loop

    int n = 153;   // number to check
    int temp, digit, sum = 0;

    temp = n; // store original number

    // Loop until n becomes 0
    for(; n > 0; n = n / 10) {
        digit = n % 10;              // get last digit
        sum = sum + (digit * digit * digit); // cube and add
    }

    if(temp == sum) {
        printf("%d is an Armstrong number\n", temp);
    } else {
        printf("%d is NOT an Armstrong number\n", temp);
    }

    return 0;
}

