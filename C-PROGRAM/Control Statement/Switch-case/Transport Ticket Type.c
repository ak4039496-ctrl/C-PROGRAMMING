// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int ticket = 2; // 1 = Single, 2 = Return, 3 = Season

    switch(ticket) {
        case 1:
            printf("Single journey ticket\n");
            break;
        case 2:
            printf("Return journey ticket\n");
            break;
        case 3:
            printf("Season pass ticket\n");
            break;
        default:
            printf("Unknown ticket type\n");
    }
    return 0;
}

