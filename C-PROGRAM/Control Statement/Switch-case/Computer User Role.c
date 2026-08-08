// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int role = 1; // 1 = Admin, 2 = Guest, 3 = User

    switch(role) {
        case 1:
            printf("Admin has full access\n");
            break;
        case 2:
            printf("Guest has limited access\n");
            break;
        case 3:
            printf("User has standard access\n");
            break;
        default:
            printf("Unknown role\n");
    }
    return 0;
}

