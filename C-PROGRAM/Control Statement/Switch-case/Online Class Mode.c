// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int mode = 2; // 1 = Live, 2 = Recorded, 3 = Hybrid

    switch(mode) {
        case 1:
            printf("Live class selected\n");
            break;
        case 2:
            printf("Recorded class selected\n");
            break;
        case 3:
            printf("Hybrid class selected\n");
            break;
        default:
            printf("Unknown class mode\n");
    }
    return 0;
}

