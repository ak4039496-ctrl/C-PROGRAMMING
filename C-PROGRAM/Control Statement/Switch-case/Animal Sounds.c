// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>
int main() {
    int choice = 1;
    switch(choice) {
        case 1:
            printf("Woof Woof\n"); // Dog sound
            break;
        case 2:
            printf("Meow Meow\n"); // Cat sound
            break;
        case 3:
            printf("Moo Moo\n"); // Cow sound
            break;
        default:
            printf("Unknown sound\n");
    }
    return 0;
}

