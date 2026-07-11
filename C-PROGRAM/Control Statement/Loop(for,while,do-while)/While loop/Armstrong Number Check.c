#include <stdio.h>
#include <math.h>

int main() {
    // Program to check if a number is Armstrong using while loop

    int num, original, digit, sum = 0, n = 0;

    printf("Enter a number:-");
    scanf("%d", &num);

    original = num;

    // Count digits
    int temp = num;
    while(temp > 0) {
        n++;
        temp = temp / 10;
    }

    // Calculate sum of digits^n
    while(num > 0) {
        digit = num % 10;
        sum += pow(digit, n);
        num = num / 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is NOT an Armstrong number\n", original);

    return 0;
}

