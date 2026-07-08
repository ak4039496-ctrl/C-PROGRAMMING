#include <stdio.h>   // Standard input-output header file

int main() {
    int x = 5;       // Declare integer variable 'x' and assign value 5
    int y = 10;      // Declare integer variable 'y' and assign value 10

    // Relational operator '>' checks if left operand is greater than right
    printf("x > y :- %d\n", x > y);

    // Relational operator '<' checks if left operand is smaller than right
    printf("x < y :- %d\n", x < y);

    // Relational operator '==' checks if both operands are equal
    printf("x == y :- %d\n", x == y);

    // Relational operator '!=' checks if both operands are not equal
    printf("x != y :- %d\n", x != y);

    // Relational operator '>=' checks if left operand is greater or equal
    printf("x >= y :- %d\n", x >= y);

    // Relational operator '<=' checks if left operand is smaller or equal
    printf("x <= y :- %d\n", x <= y);

    return 0;        // End of program, return 0 to indicate success
}

