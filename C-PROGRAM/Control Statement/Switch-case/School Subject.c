// Author: Amit Gupta
// Date: 24 July 2026
#include <stdio.h>

int main() {
    int subject = 4; // 1 = Math, 2 = Science, 3 = History, 4 = English

    switch(subject) {
        case 1:
            printf("You selected Mathematics\n");
            break;
        case 2:
            printf("You selected Science\n");
            break;
        case 3:
            printf("You selected History\n");
            break;
        case 4:
            printf("You selected English\n");
            break;
        default:
            printf("Unknown subject\n");
    }
    return 0;
}

