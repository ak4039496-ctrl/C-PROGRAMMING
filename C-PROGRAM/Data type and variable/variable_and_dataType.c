/*
Author : Amit Gupta
Date   : 11-07-2026
*/

#include <stdio.h>   // Standard input-output header

int main() {
    // Integer type variable
    int age = 20;  
    // Float type variable (decimal values)
    float height = 5.9;  
    
    // Character type variable (single character)
    char grade = 'A';  
    
    // Double type variable (higher precision decimal)
    double pi = 3.1415926535;  
    
    // Print values of variables
    printf("Age (int):- %d\n", age);          // %d for integer
    printf("Height (float):- %.1f\n", height); // %.1f limits decimal to 1 place
    printf("Grade (char):- %c\n", grade);     // %c for character
    printf("Pi (double):- %.10lf\n", pi);     // %.10lf prints 10 decimal places
    
    return 0; // End of program
}
