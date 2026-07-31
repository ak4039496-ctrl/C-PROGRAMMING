/*
Program to print squares of numbers from 1 to 10 using do-while loop
author Amit Gupta
date July 10, 2026
*/

#include <stdio.h>
int main() {
    int i; 
    i = 1; // Initialize loop variable to 1
    do {
        printf("Square of %d => %d\n", i, i * i); 
        i++; 
    } while(i <= 10); 

    return 0; // Terminate program successfully
}
