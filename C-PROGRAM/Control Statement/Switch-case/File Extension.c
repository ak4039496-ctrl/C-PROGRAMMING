// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int extension = 2; 
    switch(extension) {
        case 1:
            printf("JPEG Image File\n");
            break;
        case 2:
            printf("PNG Image File\n");
            break;
        case 3:
            printf("Text File\n");
            break;
        case 4:
            printf("Audio File\n");
            break;
        default:
            printf("Unknown file extension\n");
    }
    return 0;
}

