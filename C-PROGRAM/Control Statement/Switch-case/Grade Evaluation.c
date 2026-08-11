// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>
int main() {
    char grade = 'B';

    switch(grade) {
        case 'A':
            printf("Excellent performance\n");
            break;
        case 'B':
            printf("Good job\n");
            break;
        case 'C':
            printf("Average work\n");
            break;
        case 'D':
            printf("Needs improvement\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    return 0;
}

