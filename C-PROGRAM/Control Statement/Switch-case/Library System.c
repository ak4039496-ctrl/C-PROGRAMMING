// Author: Amit Gupta
// Date: 29 July 2026
#include <stdio.h>

int main() {
    int action = 1; // 1 = Issue, 2 = Return, 3 = View

    switch(action) {
        case 1:
            printf("Book issued successfully\n");
            break;
        case 2:
            printf("Book returned successfully\n");
            break;
        case 3:
            printf("Viewing available books\n");
            break;
        default:
            printf("Invalid library action\n");
    }
    return 0;
}

