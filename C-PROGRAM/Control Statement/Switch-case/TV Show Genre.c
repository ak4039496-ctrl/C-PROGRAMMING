// Author: Amit Gupta
// Date: 23 July 2026
#include <stdio.h>

int main() {
    int show = 2; // 1 = Drama, 2 = Comedy, 3 = Thriller, 4 = Reality

    switch(show) {
        case 1:
            printf("You are watching Drama\n");
            break;
        case 2:
            printf("You are watching Comedy\n");
            break;
        case 3:
            printf("You are watching Thriller\n");
            break;
        case 4:
            printf("You are watching Reality Show\n");
            break;
        default:
            printf("Unknown show type\n");
    }
    return 0;
}

