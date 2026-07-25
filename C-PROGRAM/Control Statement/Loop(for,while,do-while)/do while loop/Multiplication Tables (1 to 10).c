/* Author :- Amit Kumar
Date :- 20-07-2026*/
#include <stdio.h>
int main() {
    int i, j; 

    i = 1;
    do {
        printf("\nMultiplication Table of %d:\n", i);

        j = 1;
        do {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while(j <= 10);
        
        i++;
    } while(i <= 10);

    return 0;
}
