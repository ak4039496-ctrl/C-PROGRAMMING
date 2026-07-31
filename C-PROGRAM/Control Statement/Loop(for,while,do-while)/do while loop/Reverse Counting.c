/*
brief Program to print numbers from 10 down to 1 using do-while loop
author: Amit Gupta
date: July 10, 2026
*/
#include <stdio.h> // Include standard input-output library
int main() {
    int i; // Declare loop variable
    i = 10;
    do {
        printf("Number: %d\n", i); // Print the current number
        i--;
    } while(i >= 1); 

    return 0; // Terminate program successfully
}
