/*
 * Author      : Amit Gupta
 * Created on  : July 8, 2026
 */
 
#include <stdio.h>   // Standard input-output header file

int main() {
    // -------------------------------
    // Arithmetic Operators
    // -------------------------------
    int a = 10, b = 3;   // Declare two integers

    printf("\n--- Arithmetic Operators ---\n");
    printf("Addition:- %d + %d => %d\n", a, b, a + b);
    printf("Subtraction:- %d - %d => %d\n", a, b, a - b);
    printf("Multiplication:- %d * %d => %d\n", a, b, a * b);
    printf("Division:- %d / %d => %d\n", a, b, a / b);
    printf("Modulus:- %d %% %d => %d\n", a, b, a % b);

    // -------------------------------
    // Relational Operators
    // -------------------------------
    int x = 5, y = 10;

    printf("\n--- Relational Operators ---\n");
    printf("x > y :- %d\n", x > y);
    printf("x < y :- %d\n", x < y);
    printf("x == y :- %d\n", x == y);
    printf("x != y :- %d\n", x != y);
    printf("x >= y :- %d\n", x >= y);
    printf("x <= y : %d\n", x <= y);

    // -------------------------------
    // Logical Operators
    // -------------------------------
    int p = 1, q = 0;

    printf("\n--- Logical Operators ---\n");
    printf("p && q :- %d\n", p && q);
    printf("p || q :- %d\n", p || q);
    printf("!p :- %d\n", !p);
    printf("!q :- %d\n", !q);

    // -------------------------------
    // Assignment Operators
    // -------------------------------
    int num = 10;

    printf("\n--- Assignment Operators ---\n");
    printf("Initial num => %d\n", num);
    num += 5;   // Add and assign
    printf("After num += 5 :- %d\n", num);
    num -= 3;   // Subtract and assign
    printf("After num -= 3 :- %d\n", num);
    num *= 2;   // Multiply and assign
    printf("After num *= 2 :- %d\n", num);
    num /= 4;   // Divide and assign
    printf("After num /= 4 :- %d\n", num);
    num %= 3;   // Modulus and assign
    printf("After num %%= 3 :- %d\n", num);

    // -------------------------------
    // Increment & Decrement Operators
    // -------------------------------
    int val = 5;

    printf("\n--- Increment & Decrement Operators ---\n");
    printf("Pre-increment (++val) :- %d\n", ++val);
    printf("Post-increment (val++) :- %d\n", val++);
    printf("Value after post-increment :- %d\n", val);
    printf("Pre-decrement (--val) :- %d\n", --val);
    printf("Post-decrement (val--) :- %d\n", val--);
    printf("Value after post-decrement :- %d\n", val);

    // -------------------------------
    // Bitwise Operators
    // -------------------------------
    int m = 6, n = 3;   // Binary: m=110, n=011

    printf("\n--- Bitwise Operators ---\n");
    printf("m & n :- %d\n", m & n);   // AND
    printf("m | n :- %d\n", m | n);   // OR
    printf("m ^ n :- %d\n", m ^ n);   // XOR
    printf("~m :- %d\n", ~m);         // NOT
    printf("m << 1 :- %d\n", m << 1); // Left shift
    printf("m >> 1 :- %d\n", m >> 1); // Right shift

    return 0;   // End of program
}

