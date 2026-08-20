// Author: Amit Gupta
// Date: 25 July 2026
#include <stdio.h>

int main() {
    int weather = 2; // 1 = Sunny, 2 = Rainy, 3 = Snowy

    switch(weather) {
        case 1:
            printf("Wear sunglasses\n");
            break;
        case 2:
            printf("Take an umbrella\n");
            break;
        case 3:
            printf("Wear warm clothes\n");
            break;
        default:
            printf("Weather unknown\n");
    }
    return 0;
}

