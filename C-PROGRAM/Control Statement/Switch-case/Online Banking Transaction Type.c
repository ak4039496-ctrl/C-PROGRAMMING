// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int transaction = 1; // 1 = Deposit, 2 = Withdraw, 3 = Transfer

    switch(transaction) {
        case 1:
            printf("Deposit successful\n");
            break;
        case 2:
            printf("Withdrawal successful\n");
            break;
        case 3:
            printf("Transfer successful\n");
            break;
        default:
            printf("Invalid transaction type\n");
    }
    return 0;
}

