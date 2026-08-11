// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int choice = 1; // 1 = Apple, 2 = Banana, 3 = Mango

    switch(choice) {
        case 1:
            printf("You chose Apple\n");
            break;
        case 2:
            printf("You chose Banana\n");
            break;
        case 3:
            printf("You chose Mango\n");
            break;
        default:
            printf("Unknown fruit\n");
    }
    return 0;
}

