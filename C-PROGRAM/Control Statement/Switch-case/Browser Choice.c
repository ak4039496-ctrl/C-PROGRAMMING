// Author: Amit Gupta
// Date: 11 July 2026
#include <stdio.h>

int main() {
    int browser = 1; // 1 = Chrome, 2 = Edge, 3 = Firefox, 4 = Safari

    switch(browser) {
        case 1:
            printf("Google Chrome selected\n");
            break;
        case 2:
            printf("Microsoft Edge selected\n");
            break;
        case 3:
            printf("Mozilla Firefox selected\n");
            break;
        case 4:
            printf("Apple Safari selected\n");
            break;
        default:
            printf("Unknown browser\n");
    }
    return 0;
}

