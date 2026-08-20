// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int train_class = 1; // 1 = Sleeper, 2 = AC, 3 = General, 4 = First

    switch(train_class) {
        case 1:
            printf("Sleeper Class\n");
            break;
        case 2:
            printf("Air Conditioned Class\n");
            break;
        case 3:
            printf("General Class\n");
            break;
        case 4:
            printf("First Class\n");
            break;
        default:
            printf("Unknown train class\n");
    }
    return 0;
}

