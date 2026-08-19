// Author: Amit Gupta
// Date: 28 July 2026
#include <stdio.h>

int main() {
    int marks = 72; // Step 1: Define marks
    int grade_code; // Step 2: Map marks into grade code

    if(marks >= 90) grade_code = 1;
    else if(marks >= 75) grade_code = 2;
    else if(marks >= 60) grade_code = 3;
    else if(marks >= 33) grade_code = 4;
    else grade_code = 5;

    // Step 3: Switch-case on grade code
    switch(grade_code) {
        case 1:
            printf("Grade A\n");
            break;
        case 2:
            printf("Grade B\n");
            break;
        case 3:
            printf("Grade C\n");
            break;
        case 4:
            printf("Grade D\n");
            break;
        case 5:
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    return 0;
}

