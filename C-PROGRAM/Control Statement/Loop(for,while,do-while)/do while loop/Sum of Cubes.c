/*
Program to find sum of cubes of numbers from 1 to 10 using do-while loop
author Amit Gupta
date July 10, 2026
*/
#include <stdio.h> 
int main() {
    int i;
    int sum = 0;

    i = 1;
    do {
        sum = sum + (i * i * i); 
        i++; 
    } while(i <= 10);

    printf("Sum of cubes from 1 to 10 => %d\n", sum); // Display the final calculation result

    return 0; // Terminate program successfully
}
