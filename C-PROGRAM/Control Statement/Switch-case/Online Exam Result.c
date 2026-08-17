// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int result = 2; // 1 = Pass, 2 = Fail, 3 = Pending

    switch(result) {
        case 1:
            printf("You passed the exam\n");
            break;
        case 2:
            printf("You failed the exam\n");
            break;
        case 3:
            printf("Result is pending\n");
            break;
        default:
            printf("Invalid result status\n");
    }
    return 0;
}

