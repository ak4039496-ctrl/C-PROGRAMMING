// Author: Amit Gupta
// Date: 19 July 2026
#include <stdio.h>

int main() {
    int rating = 4; // 1 = Poor, 2 = Average, 3 = Good, 4 = Excellent

    switch(rating) {
        case 1:
            printf("Movie rating: Poor\n");
            break;
        case 2:
            printf("Movie rating: Average\n");
            break;
        case 3:
            printf("Movie rating: Good\n");
            break;
        case 4:
            printf("Movie rating: Excellent\n");
            break;
        default:
            printf("Invalid rating\n");
    }
    return 0;
}

