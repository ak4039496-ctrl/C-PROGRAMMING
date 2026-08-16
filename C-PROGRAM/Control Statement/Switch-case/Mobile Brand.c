// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int brand = 2; // 1 = Apple, 2 = Samsung, 3 = OnePlus, 4 = Xiaomi

    switch(brand) {
        case 1:
            printf("You selected iPhone\n");
            break;
        case 2:
            printf("You selected Samsung\n");
            break;
        case 3:
            printf("You selected OnePlus\n");
            break;
        case 4:
            printf("You selected Xiaomi\n");
            break;
        default:
            printf("Unknown brand\n");
    }
    return 0;
}

