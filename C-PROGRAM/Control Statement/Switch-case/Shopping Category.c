// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int category = 3; // 1 = Electronics, 2 = Clothing, 3 = Groceries, 4 = Furniture

    switch(category) {
        case 1:
            printf("You selected Electronics\n");
            break;
        case 2:
            printf("You selected Clothing\n");
            break;
        case 3:
            printf("You selected Groceries\n");
            break;
        case 4:
            printf("You selected Furniture\n");
            break;
        default:
            printf("Unknown category\n");
    }
    return 0;
}

