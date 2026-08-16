// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int light = 2; // 1 = White, 2 = Blue, 3 = Yellow, 4 = Red

    switch(light) {
        case 1:
            printf("Bright light\n");
            break;
        case 2:
            printf("Cool light\n");
            break;
        case 3:
            printf("Warm light\n");
            break;
        case 4:
            printf("Dim light\n");
            break;
        default:
            printf("Unknown light color\n");
    }
    return 0;
}

