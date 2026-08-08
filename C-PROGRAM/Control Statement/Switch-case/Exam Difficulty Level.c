// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int level = 1; // 1 = Easy, 2 = Medium, 3 = Hard

    switch(level) {
        case 1:
            printf("Exam level:- Easy\n");
            break;
        case 2:
            printf("Exam level:- Medium\n");
            break;
        case 3:
            printf("Exam level:-  Hard\n");
            break;
        default:
            printf("Invalid level\n");
    }
    return 0;
}

