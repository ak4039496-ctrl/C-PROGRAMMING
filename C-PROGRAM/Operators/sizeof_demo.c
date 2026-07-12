#include <stdio.h>   // Standard input-output library include

int main() {
    int a;        // Declare integer variable
    char ch;      // Declare character variable
    float f;      // Declare float variable
    double d;     // Declare double variable

    // Print size of each variable using sizeof operator
    printf("Size of int => %lu bytes\n", sizeof(a));
    printf("Size of char => %lu bytes\n", sizeof(ch));
    printf("Size of float => %lu bytes\n", sizeof(f));
    printf("Size of double => %lu bytes\n", sizeof(d));

    // Print size of data types directly
    printf("Size of int type => %lu bytes\n", sizeof(int));
    printf("Size of char type => %lu bytes\n", sizeof(char));
    printf("Size of float type => %lu bytes\n", sizeof(float));
    printf("Size of double type => %lu bytes\n", sizeof(double));

    return 0;   // End program
}

