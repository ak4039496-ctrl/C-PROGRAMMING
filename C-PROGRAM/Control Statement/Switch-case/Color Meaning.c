// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>
int main() {
    int color = 2; // 1 = Red, 2 = Green, 3 = Blue, 4 = Yellow

    switch(color) {
        case 1:
            printf("Red means danger\n");
            break;
        case 2:
            printf("Green means safe\n");
            break;
        case 3:
            printf("Blue means calm\n");
            break;
        case 4:
            printf("Yellow means warning\n");
            break;
        default:
            printf("Unknown color\n");
    }
    return 0;
}

