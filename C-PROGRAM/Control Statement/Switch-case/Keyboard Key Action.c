// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int key = 1; // 1 = Enter, 2 = Space, 3 = Backspace, 4 = Tab

    switch(key) {
        case 1:
            printf("New line or execute command\n");
            break;
        case 2:
            printf("Insert a space\n");
            break;
        case 3:
            printf("Delete previous character\n");
            break;
        case 4:
            printf("Move to next field\n");
            break;
        default:
            printf("Unknown key\n");
    }
    return 0;
}

