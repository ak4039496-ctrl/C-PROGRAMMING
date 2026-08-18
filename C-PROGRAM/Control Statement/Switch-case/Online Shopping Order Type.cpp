// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int order = 4; // 1 = Electronics, 2 = Clothing, 3 = Books, 4 = Groceries

    switch(order) {
        case 1:
            printf("Electronics order placed\n");
            break;
        case 2:
            printf("Clothing order placed\n");
            break;
        case 3:
            printf("Books order placed\n");
            break;
        case 4:
            printf("Groceries order placed\n");
            break;
        default:
            printf("Unknown order type\n");
    }
    return 0;
}

