// Author: Amit Gupta
// Date: 23 July 2026
#include <stdio.h>

int main() {
    int os = 1; // 1 = Windows, 2 = Linux, 3 = MacOS

    switch(os) {
        case 1:
            printf("You are using Windows\n");
            break;
        case 2:
            printf("You are using Linux\n");
            break;
        case 3:
            printf("You are using MacOS\n");
            break;
        default:
            printf("Unknown operating system\n");
    }
    return 0;
}

