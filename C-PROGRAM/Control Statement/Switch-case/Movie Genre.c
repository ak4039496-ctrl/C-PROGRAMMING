// Author: Amit Gupta
// Date: 18 July 2026
#include <stdio.h>

int main() {
    int genre = 1; // 1 = Action, 2 = Comedy, 3 = Drama, 4 = Horror

    switch(genre) {
        case 1:
            printf("Explosions and fights!\n");
            break;
        case 2:
            printf("Lots of laughs\n");
            break;
        case 3:
            printf("Serious storytelling\n");
            break;
        case 4:
            printf("Scary scenes\n");
            break;
        default:
            printf("Unknown genre\n");
    }
    return 0;
}

