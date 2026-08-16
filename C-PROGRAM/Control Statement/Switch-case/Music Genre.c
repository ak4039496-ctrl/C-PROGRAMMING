// Author: Amit Gupta
// Date: 20 July 2026
#include <stdio.h>

int main() {
    int genre = 2; // 1 = Pop, 2 = Rock, 3 = Classical, 4 = Jazz

    switch(genre) {
        case 1:
            printf("You chose Pop music\n");
            break;
        case 2:
            printf("You chose Rock music\n");
            break;
        case 3:
            printf("You chose Classical music\n");
            break;
        case 4:
            printf("You chose Jazz music\n");
            break;
        default:
            printf("Unknown genre\n");
    }
    return 0;
}

