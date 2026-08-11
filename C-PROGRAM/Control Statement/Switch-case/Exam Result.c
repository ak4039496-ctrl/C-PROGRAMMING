// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int marks = 45; // Step 1: Define marks
    switch(1) { 
        case 1:
            if(marks >= 90)
                printf("Grade A\n");
            else if(marks >= 75)
                printf("Grade B\n");
            else if(marks >= 50)
                printf("Grade C\n");
            else if(marks >= 33)
                printf("Grade D\n");
            else
                printf("Fail\n");
            break;
    }
    return 0;
}

