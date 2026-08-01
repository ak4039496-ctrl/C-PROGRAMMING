// Author: Amit Gupta
// Date: 12 July 2026
#include <stdio.h>
int main() {
    int beverage = 2; // 1 = Tea, 2 = Coffee, 3 = Juice, 4 = Water

    switch(beverage) {
        case 1:
            printf("You chose Tea\n");
            break;
        case 2:
            printf("You chose Coffee\n");
            break;
        case 3:
            printf("You chose Juice\n");
            break;
        case 4:
            printf("You chose Water\n");
            break;
        default:
            printf("Unknown beverage\n");
    }
    return 0;
}

