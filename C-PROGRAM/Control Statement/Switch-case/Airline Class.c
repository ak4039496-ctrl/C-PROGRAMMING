// Author: Amit Gupta
// Date: 11 July 2026
#include <stdio.h>

int main() {
    int airline_class = 3; // 1 = Economy, 2 = Business, 3 = First Class

    switch(airline_class) {
        case 1:
            printf("Economy Class selected\n");
            break;
        case 2:
            printf("Business Class selected\n");
            break;
        case 3:
            printf("First Class selected\n");
            break;
        default:
            printf("Unknown airline class\n");
    }
    return 0;
}

