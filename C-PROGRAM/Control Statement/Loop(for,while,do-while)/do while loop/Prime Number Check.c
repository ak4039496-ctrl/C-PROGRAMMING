#include <stdio.h>
int main() {
    int n = 29;   
    int i, flag = 0;

    // Loop from 2 to n/2
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

    if(flag == 0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
