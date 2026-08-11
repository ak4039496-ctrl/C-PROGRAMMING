// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>
int main() {
    int file_type = 2; // 1 = PDF, 2 = DOCX, 3 = XLSX, 4 = PNG

    switch(file_type) {
        case 1:
            printf("Portable Document Format\n");
            break;
        case 2:
            printf("Microsoft Word Document\n");
            break;
        case 3:
            printf("Microsoft Excel File\n");
            break;
        case 4:
            printf("Image File (PNG)\n");
            break;
        default:
            printf("Unknown file type\n");
    }
    return 0;
}

