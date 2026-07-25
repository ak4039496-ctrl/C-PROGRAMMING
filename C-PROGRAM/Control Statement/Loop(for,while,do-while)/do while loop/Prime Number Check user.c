#include <stdio.h>
int main() {
    int n, i, flag = 0;

    printf("Enter a number:- ");
    scanf("%d", &n);

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

    if(n <= 1) {
        printf("%d is NOT a Prime number\n", n);
    } else if(flag == 0) {
        printf("%d is a Prime number\n", n);
    } else {
        printf("%d is NOT a Prime number\n", n);
    }

    return 0;
}
