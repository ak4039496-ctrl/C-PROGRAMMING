// Author: Amit Gupta
// Date: 30 July 2026
#include <stdio.h>

int main() {
    int action = 2; // 1 = Start, 2 = Submit, 3 = Review

    switch(action) {
        case 1:
            printf("Exam started\n");
            break;
        case 2:
            printf("Exam submitted\n");
            break;
        case 3:
            printf("Exam under review\n");
            break;
        default:
            printf("Invalid exam action\n");
    }
    return 0;
}

