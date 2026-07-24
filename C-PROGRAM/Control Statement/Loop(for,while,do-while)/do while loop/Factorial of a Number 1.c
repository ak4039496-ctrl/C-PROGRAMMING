#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number:- ");
    scanf("%d", &n);

    i = 1;
    do {
        fact = fact * i;
        i++;
    } while(i <= n);

    printf("Factorial of %d => %lld\n", n, fact);
    return 0;
}
