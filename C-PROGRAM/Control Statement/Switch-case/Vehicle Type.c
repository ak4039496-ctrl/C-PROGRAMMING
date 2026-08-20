// Author: Amit Gupta
// Date: 22 July 2026
#include <stdio.h>

int main() {
    int vehicle = 2; // 1 = Car, 2 = Bike, 3 = Bus, 4 = Truck

    switch(vehicle) {
        case 1:
            printf("Four-wheeler vehicle\n");
            break;
        case 2:
            printf("Two-wheeler vehicle\n");
            break;
        case 3:
            printf("Public transport vehicle\n");
            break;
        case 4:
            printf("Heavy vehicle\n");
            break;
        default:
            printf("Unknown vehicle type\n");
    }
    return 0;
}

