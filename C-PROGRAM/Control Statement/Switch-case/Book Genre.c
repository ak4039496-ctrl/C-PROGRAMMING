// Author: Amit Gupta
// Date: 11 July 2026
#include <stdio.h>
int main() {
    int genre = 3; // 1 = Fiction, 2 = Non-Fiction, 3 = Biography, 4 = Poetry

    switch(genre) {
        case 1:
            printf("You chose Fiction\n");
            break;
        case 2:
            printf("You chose Non-Fiction\n");
            break;
        case 3:
            printf("You chose Biography\n");
            break;
        case 4:
            printf("You chose Poetry\n");
            break;
        default:
            printf("Unknown genre\n");
    }
    return 0;
}

