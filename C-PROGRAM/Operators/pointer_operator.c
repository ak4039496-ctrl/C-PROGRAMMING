#include <stdio.h>   // Standard input-output library include

int main() {
    int a;        // Declare an integer variable
    int *ptr;     // Declare a pointer to integer

    // Input a number
    printf("Enter a number:- ");
    scanf("%d", &a);

    // Assign address of variable 'a' to pointer 'ptr'
    ptr = &a;

    // Print value of 'a' directly
    printf("Value of a => %d\n", a);

    // Print address of 'a' using & operator
    printf("Address of a => %p\n", &a);

    // Print value of 'a' using pointer dereference
    printf("Value of a using pointer => %d\n", *ptr);

    return 0;   // End program
}

