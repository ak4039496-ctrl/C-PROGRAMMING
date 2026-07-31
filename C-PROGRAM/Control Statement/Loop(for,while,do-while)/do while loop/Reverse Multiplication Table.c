/**
Program to print multiplication table of a number in reverse order using do-while loop
autho Amit Gupta
date July 10, 2026
 */
#include <stdio.h> // Include standard input-output library
int main() {
    int n = 7;  // Define the target number for the multiplication table
    int i;      // Declare loop variable

    printf("Reverse Multiplication Table of %d:-\n", n); 

    i = 10;
    do {
        printf("%d x %d = %d\n", n, i, n * i); 
        i--; 
    } while(i >= 1); 

    return 0; 
}
