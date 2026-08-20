// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    char signal = 'R'; // R = Red, Y = Yellow, G = Green

    switch(signal) {
        case 'R':
            printf("Stop\n"); // Executes if Red
            break;
        case 'Y':
            printf("Get Ready\n"); // Executes if Yellow
            break;
        case 'G':
            printf("Go\n"); // Executes if Green
            break;
        default:
            printf("Invalid signal\n"); // Default case
    }
    return 0;
}

