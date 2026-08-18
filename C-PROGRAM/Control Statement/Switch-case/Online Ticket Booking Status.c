// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int status = 1; // 1 = Confirmed, 2 = Waiting, 3 = Cancelled

    switch(status) {
        case 1:
            printf("Ticket confirmed\n");
            break;
        case 2:
            printf("Ticket on waiting list\n");
            break;
        case 3:
            printf("Ticket cancelled\n");
            break;
        default:
            printf("Invalid ticket status\n");
    }
    return 0;
}

