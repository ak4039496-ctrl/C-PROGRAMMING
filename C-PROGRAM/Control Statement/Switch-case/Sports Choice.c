// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int sport = 2; // 1 = Football, 2 = Cricket, 3 = Hockey, 4 = Tennis

    switch(sport) {
        case 1:
            printf("You chose Football\n");
            break;
        case 2:
            printf("You chose Cricket\n");
            break;
        case 3:
            printf("You chose Hockey\n");
            break;
        case 4:
            printf("You chose Tennis\n");
            break;
        default:
            printf("Unknown sport\n");
    }
    return 0;
}

