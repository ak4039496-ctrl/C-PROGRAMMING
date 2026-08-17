// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>

int main() {
    int status = 1; // 1 = Active, 2 = Inactive, 3 = Closed

    switch(status) {
        case 1:
            printf("Account is Active\n");
            break;
        case 2:
            printf("Account is Inactive\n");
            break;
        case 3:
            printf("Account is Closed\n");
            break;
        default:
            printf("Unknown account status\n");
    }
    return 0;
}

