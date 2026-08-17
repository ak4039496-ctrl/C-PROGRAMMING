// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>

int main() {
    int course = 3; // 1 = Programming, 2 = Design, 3 = Marketing

    switch(course) {
        case 1:
            printf("Programming course selected\n");
            break;
        case 2:
            printf("Design course selected\n");
            break;
        case 3:
            printf("Marketing course selected\n");
            break;
        default:
            printf("Unknown course type\n");
    }
    return 0;
}

