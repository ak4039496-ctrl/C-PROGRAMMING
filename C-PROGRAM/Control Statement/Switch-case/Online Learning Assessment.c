// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int assessment = 3; // 1 = Quiz, 2 = Assignment, 3 = Project

    switch(assessment) {
        case 1:
            printf("Quiz selected\n");
            break;
        case 2:
            printf("Assignment selected\n");
            break;
        case 3:
            printf("Project selected\n");
            break;
        default:
            printf("Unknown assessment type\n");
    }
    return 0;
}

