// Author: Amit Gupta
// Date: 27 July 2026
#include <stdio.h>

int main() {
    int attendance = 1; // 1 = Present, 2 = Absent, 3 = Late, 4 = Excused

    switch(attendance) {
        case 1:
            printf("Student is present\n");
            break;
        case 2:
            printf("Student is absent\n");
            break;
        case 3:
            printf("Student is late\n");
            break;
        case 4:
            printf("Student is excused\n");
            break;
        default:
            printf("Invalid attendance status\n");
    }
    return 0;
}

