// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int delivery = 1; // 1 = Standard, 2 = Express, 3 = Same-day

    switch(delivery) {
        case 1:
            printf("Standard delivery selected\n");
            break;
        case 2:
            printf("Express delivery selected\n");
            break;
        case 3:
            printf("Same-day delivery selected\n");
            break;
        default:
            printf("Unknown delivery option\n");
    }
    return 0;
}

