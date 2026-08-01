// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>

int main() {
    int clothing = 1; // 1 = Shirt, 2 = Pants, 3 = Shoes, 4 = Jacket

    switch(clothing) {
        case 1:
            printf("You selected Shirt\n");
            break;
        case 2:
            printf("You selected Pants\n");
            break;
        case 3:
            printf("You selected Shoes\n");
            break;
        case 4:
            printf("You selected Jacket\n");
            break;
        default:
            printf("Unknown clothing item\n");
    }
    return 0;
}

