// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int error_code = 404; // Example error code

    switch(error_code) {
        case 200:
            printf("OK - Request successful\n");
            break;
        case 404:
            printf("Error 404 - Not Found\n");
            break;
        case 500:
            printf("Error 500 - Server Error\n");
            break;
        default:
            printf("Unknown error code\n");
    }
    return 0;
}

