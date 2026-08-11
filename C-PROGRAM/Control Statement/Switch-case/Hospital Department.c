// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>
int main() {
    int dept = 2;
    switch(dept) {
        case 1:
            printf("Cardiology Department\n");
            break;
        case 2:
            printf("Neurology Department\n");
            break;
        case 3:
            printf("Orthopedics Department\n");
            break;
        case 4:
            printf("Pediatrics Department\n");
            break;
        default:
            printf("Unknown department\n");
    }
    return 0;
}

