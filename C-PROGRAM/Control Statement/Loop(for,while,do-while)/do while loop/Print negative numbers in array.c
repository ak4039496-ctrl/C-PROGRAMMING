/*
Author: Amit Gupta
Date: 17-07-2026
Print negative numbers from array */
#include <stdio.h>

int main() {
    int arr[] = {-1, 5, -3, 7, 9}, i = 0;
    do {
        if (arr[i] < 0)
            printf("%d ", arr[i]);
        i++;
    } while (i < 5);
    return 0;
}
