// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int question = 2; // 1 = MCQ, 2 = True/False, 3 = Short Answer

    switch(question) {
        case 1:
            printf("Multiple Choice Question selected\n");
            break;
        case 2:
            printf("True/False Question selected\n");
            break;
        case 3:
            printf("Short Answer Question selected\n");
            break;
        default:
            printf("Unknown question type\n");
    }
    return 0;
}

