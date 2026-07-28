/*
Author: Amit Gupta
Date: 16-07-2026
Calculate product of array elements
*/
#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4}, i = 0, product = 1;
    do {
        product *= arr[i];
        i++;
    } while (i < 3);
    printf("Product => %d\n", product);
    return 0;
}
