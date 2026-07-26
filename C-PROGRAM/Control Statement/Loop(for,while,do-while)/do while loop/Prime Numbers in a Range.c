#include <stdio.h>
int main() {
    int n, i, flag;

    printf("Prime numbers between 1 and 50:\n");

    n = 2;
    do {
        flag = 0; 
        // Check divisibility
        i = 2;
        if (i <= n/2) {
            do {
                if(n % i == 0) {
                    flag = 1; 
                    break;
                }
                i++;
            } while(i <= n/2);
        }

        if(flag == 0) {
            printf("%d ", n); 
        }
        n++;
    } while(n <= 50);

    return 0;
}
