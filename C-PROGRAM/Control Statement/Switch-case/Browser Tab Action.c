// Author: Amit Gupta
// Date: 10 July 2026
#include <stdio.h>
int main() {
    int action = 2; // 1 = Open, 2 = Close, 3 = Refresh, 4 = Bookmark

    switch(action) {
        case 1:
            printf("Tab opened\n");
            break;
        case 2:
            printf("Tab closed\n");
            break;
        case 3:
            printf("Tab refreshed\n");
            break;
        case 4:
            printf("Tab bookmarked\n");
            break;
        default:
            printf("Unknown action\n");
    }
    return 0;
}

