// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int level = 2; // 1 = Beginner, 2 = Intermediate, 3 = Advanced

    switch(level) {
        case 1:
            printf("Beginner level course\n");
            break;
        case 2:
            printf("Intermediate level course\n");
            break;
        case 3:
            printf("Advanced level course\n");
            break;
        default:
            printf("Unknown course level\n");
    }
    return 0;
}

