/*
Author: Amit Gupta
Date: 17-07-2026
Calculate sum of array elements
*/
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, i = 0, sum = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < 5);
    printf("Sum => %d\n", sum);
    return 0;
}
