// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int plan = 3; // 1 = Basic, 2 = Standard, 3 = Premium

    switch(plan) {
        case 1:
            printf("Basic subscription activated\n");
            break;
        case 2:
            printf("Standard subscription activated\n");
            break;
        case 3:
            printf("Premium subscription activated\n");
            break;
        default:
            printf("Invalid subscription plan\n");
    }
    return 0;
}

