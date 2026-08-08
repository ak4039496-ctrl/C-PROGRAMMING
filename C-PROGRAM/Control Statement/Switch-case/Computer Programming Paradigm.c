// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int paradigm = 2; // 1 = Procedural, 2 = Object-Oriented, 3 = Functional

    switch(paradigm) {
        case 1:
            printf("Procedural Programming\n");
            break;
        case 2:
            printf("Object-Oriented Programming\n");
            break;
        case 3:
            printf("Functional Programming\n");
            break;
        default:
            printf("Unknown paradigm\n");
    }
    return 0;
}

