// Author: Amit Gupta
// Date: 26-July 2026
#include <stdio.h>

int main() {
    int subject = 2;
    switch(subject) {
        case 1:
            printf("Math exam scheduled\n");
            break;
        case 2:
            printf("Science exam scheduled\n");
            break;
        case 3:
            printf("English exam scheduled\n");
            break;
        case 4:
            printf("History exam scheduled\n");
            break;
        default:
            printf("Unknown subject\n");
    }
    return 0;
}

