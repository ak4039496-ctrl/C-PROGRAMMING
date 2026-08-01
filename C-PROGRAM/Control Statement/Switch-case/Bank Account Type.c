// Author: Amit Gupta
// Date: 11 July 2026
#include <stdio.h>
int main() {
    int account = 3;

    switch(account) {
        case 1:
            printf("Savings Account selected\n");
            break;
        case 2:
            printf("Current Account selected\n");
            break;
        case 3:
            printf("Fixed Deposit Account selected\n");
            break;
        default:
            printf("Unknown account type\n");
    }
    return 0;
}

