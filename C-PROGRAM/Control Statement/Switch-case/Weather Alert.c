// Author: Amit Gupta
// Date: 22 July 2026
#include <stdio.h>

int main() {
    int alert = 2; // 1 = Rain, 2 = Storm, 3 = Heat

    switch(alert) {
        case 1:
            printf("Carry umbrella\n");
            break;
        case 2:
            printf("Stay indoors\n");
            break;
        case 3:
            printf("Drink water\n");
            break;
        default:
            printf("No alert\n");
    }
    return 0;
}

