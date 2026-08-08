// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int device = 2; // 1 = Laptop, 2 = Mobile, 3 = Tablet, 4 = Desktop

    switch(device) {
        case 1:
            printf("You are using a Laptop\n");
            break;
        case 2:
            printf("You are using a Mobile\n");
            break;
        case 3:
            printf("You are using a Tablet\n");
            break;
        case 4:
            printf("You are using a Desktop\n");
            break;
        default:
            printf("Unknown device\n");
    }
    return 0;
}

