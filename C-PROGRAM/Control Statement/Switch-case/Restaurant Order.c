// Author: Amit Gupta
// Date: 25 July 2026
#include <stdio.h>

int main() {
    int order = 1; // 1 = Pizza, 2 = Burger, 3 = Pasta

    switch(order) {
        case 1:
            printf("You ordered Pizza\n");
            break;
        case 2:
            printf("You ordered Burger\n");
            break;
        case 3:
            printf("You ordered Pasta\n");
            break;
        default:
            printf("Unknown order\n");
    }
    return 0;
}

