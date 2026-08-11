// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int festival = 1; // 1 = Diwali, 2 = Holi, 3 = Eid, 4 = Christmas

    switch(festival) {
        case 1:
            printf("Festival of Lights\n");
            break;
        case 2:
            printf("Festival of Colors\n");
            break;
        case 3:
            printf("Festival of Joy\n");
            break;
        case 4:
            printf("Festival of Love\n");
            break;
        default:
            printf("Unknown festival\n");
    }
    return 0;
}

