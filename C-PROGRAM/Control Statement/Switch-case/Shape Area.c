// Author: Amit Gupta
// Date: 25 July 2026
#include <stdio.h>

int main() {
    int shape = 1; // 1 = Circle, 2 = Square
    int radius = 5, side = 4;

    switch(shape) {
        case 1:
            printf("Area => %.2f\n", 3.14 * radius * radius); // Circle area
            break;
        case 2:
            printf("Area => %d\n", side * side); // Square area
            break;
        default:
            printf("Shape not supported\n");
    }
    return 0;
}

