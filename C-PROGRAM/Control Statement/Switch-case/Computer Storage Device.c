// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>
int main() {
    int storage = 2; // 1 = HDD, 2 = SSD, 3 = Pen Drive, 4 = Memory Card

    switch(storage) {
        case 1:
            printf("Hard Disk Drive selected\n");
            break;
        case 2:
            printf("Solid State Drive selected\n");
            break;
        case 3:
            printf("Pen Drive selected\n");
            break;
        case 4:
            printf("Memory Card selected\n");
            break;
        default:
            printf("Unknown storage device\n");
    }
    return 0;
}

