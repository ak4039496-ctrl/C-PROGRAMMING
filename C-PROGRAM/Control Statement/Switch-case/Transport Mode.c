// Author: Amit Gupta
// Date: 25 July 2026
#include <stdio.h>

int main() {
    int transport = 2; // 1 = Car, 2 = Bike, 3 = Bus, 4 = Train

    switch(transport) {
        case 1:
            printf("Traveling by Car\n");
            break;
        case 2:
            printf("Traveling by Bike\n");
            break;
        case 3:
            printf("Traveling by Bus\n");
            break;
        case 4:
            printf("Traveling by Train\n");
            break;
        default:
            printf("Unknown transport mode\n");
    }
    return 0;
}

