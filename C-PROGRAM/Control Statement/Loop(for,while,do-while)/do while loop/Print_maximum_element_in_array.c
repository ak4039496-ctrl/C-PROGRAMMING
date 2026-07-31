/*
Author: Amit Gupta
Date: 17-07-2026
Find maximum element in array using 
*/
#include <stdio.h>
int main() {
    int arr[] = {12, 45, 67, 123, 89}, i = 1, max = arr[0];
    do {
        if (arr[i] > max)
            max = arr[i];
        i++;
    } while (i < 5);
    printf("Maximum => %d\n", max);
    return 0;
}
