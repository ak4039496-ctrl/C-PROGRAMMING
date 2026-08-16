// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int plan = 2; // 1 = Daily, 2 = Weekly, 3 = Monthly

    switch(plan) {
        case 1:
            printf("Daily recharge plan activated\n");
            break;
        case 2:
            printf("Weekly recharge plan activated\n");
            break;
        case 3:
            printf("Monthly recharge plan activated\n");
            break;
        default:
            printf("Invalid recharge plan\n");
    }
    return 0;
}

