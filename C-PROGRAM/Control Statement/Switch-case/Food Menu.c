// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int food = 3; // 1 = Pizza, 2 = Burger, 3 = Pasta, 4 = Salad

    switch(food) {
        case 1:
            printf("You ordered Pizza\n");
            break;
        case 2:
            printf("You ordered Burger\n");
            break;
        case 3:
            printf("You ordered Pasta\n");
            break;
        case 4:
            printf("You ordered Salad\n");
            break;
        default:
            printf("Unknown food item\n");
    }
    return 0;
}

