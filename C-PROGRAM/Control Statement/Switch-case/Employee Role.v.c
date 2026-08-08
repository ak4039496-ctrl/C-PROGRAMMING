// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int role = 2; // 1 = Manager, 2 = Developer, 3 = Tester

    switch(role) {
        case 1:
            printf("Manages team\n");
            break;
        case 2:
            printf("Writes code\n");
            break;
        case 3:
            printf("Tests software\n");
            break;
        default:
            printf("Unknown role\n");
    }
    return 0;
}

