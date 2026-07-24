#include <stdio.h>

int main() {
    int i;

    i = 2;
    do {
        printf("%d ", i);
        i += 2;
    } while(i <= 20);

    return 0;
}
