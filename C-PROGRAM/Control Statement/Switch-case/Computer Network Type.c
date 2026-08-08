// Author: Amit Gupta
// Date: 26 July 2026
#include <stdio.h>

int main() {
    int network = 1; // 1 = LAN, 2 = WAN, 3 = MAN, 4 = VPN

    switch(network) {
        case 1:
            printf("Local Area Network\n");
            break;
        case 2:
            printf("Wide Area Network\n");
            break;
        case 3:
            printf("Metropolitan Area Network\n");
            break;
        case 4:
            printf("Virtual Private Network\n");
            break;
        default:
            printf("Unknown network type\n");
    }
    return 0;
}

