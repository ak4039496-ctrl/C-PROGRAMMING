// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int language = 2; // 1 = English, 2 = Hindi, 3 = French, 4 = Spanish

    switch(language) {
        case 1:
            printf("Hello\n"); // English greeting
            break;
        case 2:
            printf("Namaste\n"); // Hindi greeting
            break;
        case 3:
            printf("Bonjour\n"); // French greeting
            break;
        case 4:
            printf("Hola\n"); // Spanish greeting
            break;
        default:
            printf("Unknown language\n");
    }
    return 0;
}

