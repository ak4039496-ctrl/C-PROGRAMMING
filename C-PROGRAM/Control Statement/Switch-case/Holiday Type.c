// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>
int main() {
    int holiday = 4;

    switch(holiday) {
        case 1:
            printf("It is a National holiday\n");
            break;
        case 2:
            printf("It is a Festival holiday\n");
            break;
        case 3:
            printf("It is a Public holiday\n");
            break;
        case 4:
            printf("It is an Optional holiday\n");
            break;
        default:
            printf("Unknown holiday type\n");
    }
    return 0;
}

