/*
Author: Amit Gupta
Date: 19-07-2026
Calculate average of array elements using do...while loop
*/
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}, i = 0, sum = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < 5);
    printf("Average = %.2f\n", (float)sum / 5);
    return 0;
}
