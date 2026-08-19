// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int platform = 3; // 1 = Facebook, 2 = Instagram, 3 = Twitter, 4 = LinkedIn

    switch(platform) {
        case 1:
            printf("You are on Facebook\n");
            break;
        case 2:
            printf("You are on Instagram\n");
            break;
        case 3:
            printf("You are on Twitter\n");
            break;
        case 4:
            printf("You are on LinkedIn\n");
            break;
        default:
            printf("Unknown platform\n");
    }
    return 0;
}

