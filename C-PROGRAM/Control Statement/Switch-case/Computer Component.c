// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>

int main() {
    int component = 1; // 1 = CPU, 2 = GPU, 3 = RAM, 4 = SSD

    switch(component) {
        case 1:
            printf("Central Processing Unit\n");
            break;
        case 2:
            printf("Graphics Processing Unit\n");
            break;
        case 3:
            printf("Random Access Memory\n");
            break;
        case 4:
            printf("Solid State Drive\n");
            break;
        default:
            printf("Unknown component\n");
    }
    return 0;
}

