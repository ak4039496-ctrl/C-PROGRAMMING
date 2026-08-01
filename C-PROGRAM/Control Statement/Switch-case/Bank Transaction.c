// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>
int main() {
    int transaction = 1; // 1 = Deposit, 2 = Withdraw, 3 = Transfer

    switch(transaction) {
        case 1:
            printf("Money deposited successfully\n");
            break;
        case 2:
            printf("Money withdrawn successfully\n");
            break;
        case 3:
            printf("Money transferred successfully\n");
            break;
        default:
            printf("Invalid transaction\n");
    }
    return 0;
}

