/*
Author: Amit Gupta
Date: 19-07-2026
Find minimum element in array 
*/

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 23, 89}, i = 1, min = arr[0];
    do {
        if (arr[i] < min)
            min = arr[i];
        i++;
    } while (i < 5);
    printf("Minimum => %d\n", min);
    return 0;
}
