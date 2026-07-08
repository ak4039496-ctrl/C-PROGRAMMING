#include <stdio.h>   // Standard input-output header file

int main() {
    int num = 11;    // Declare integer variable 'num' and assign value 11

    // Simple assignment (=) assigns value to variable
    printf("Initial value of num :- %d\n", num);

    // Add and assign (+=) ? num = num + 5
    num += 5;
    printf("After num += 5, num => %d\n", num);

    // Subtract and assign (-=) ? num = num - 3
    num -= 3;
    printf("After num -= 3, num => %d\n", num);

    // Multiply and assign (*=) ? num = num * 2
    num *= 2;
    printf("After num *= 2, num => %d\n", num);

    // Divide and assign (/=) ? num = num / 4
    num /= 4;
    printf("After num /= 4, num => %d\n", num);

    // Modulus and assign (%=) ? num = num % 3
    num %= 3;
    printf("After num %%= 3, num => %d\n", num);

    return 0;        // End of program, return 0 to indicate success
}

