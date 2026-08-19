// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int facility = 1; // 1 = Waiting Room, 2 = Ticket Counter, 3 = Restroom, 4 = Food Court

    switch(facility) {
        case 1:
            printf("Waiting Room available\n");
            break;
        case 2:
            printf("Ticket Counter available\n");
            break;
        case 3:
            printf("Restroom available\n");
            break;
        case 4:
            printf("Food Court available\n");
            break;
        default:
            printf("Unknown facility\n");
    }
    return 0;
}

