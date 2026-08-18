// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int cart_action = 2; // 1 = Add Item, 2 = Remove Item, 3 = View Cart

    switch(cart_action) {
        case 1:
            printf("Item added to cart\n");
            break;
        case 2:
            printf("Item removed from cart\n");
            break;
        case 3:
            printf("Viewing cart items\n");
            break;
        default:
            printf("Invalid cart action\n");
    }
    return 0;
}

