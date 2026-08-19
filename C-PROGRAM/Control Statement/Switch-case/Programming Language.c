// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int language = 3; // 1 = Python, 2 = C, 3 = Java, 4 = C++

    switch(language) {
        case 1:
            printf("You selected Python\n");
            break;
        case 2:
            printf("You selected C\n");
            break;
        case 3:
            printf("You selected Java\n");
            break;
        case 4:
            printf("You selected C++\n");
            break;
        default:
            printf("Unknown language\n");
    }
    return 0;
}

