// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    // Step 1: Define a day (1 = Monday, 5 = Friday, 7 = Sunday)
    int day = 1;

    // Step 2: Use switch-case
    switch(day) {
        case 1:
            printf("Start of the week\n"); 
            break;
        case 5:
            printf("Weekend is near!\n"); 
            break;
        case 7:
            printf("Relax, it's Sunday\n");
            break;
        default:
            printf("Midweek day\n");  
    }
    return 0;
}

