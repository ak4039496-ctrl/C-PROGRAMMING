// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>

int main() {
    int loan = 3; // 1 = Home Loan, 2 = Car Loan, 3 = Personal Loan

    switch(loan) {
        case 1:
            printf("Home Loan selected\n");
            break;
        case 2:
            printf("Car Loan selected\n");
            break;
        case 3:
            printf("Personal Loan selected\n");
            break;
        default:
            printf("Unknown loan type\n");
    }
    return 0;
}

