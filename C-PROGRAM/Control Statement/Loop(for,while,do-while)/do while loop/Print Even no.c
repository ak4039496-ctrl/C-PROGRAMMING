/*2 to 20 using do-while loop
* author:-Amit Gupta
* date July 19, 2026
*/
#include <stdio.h> // Include standard input-output library

int main() {
    int i;
    i = 2; // Initialize loop variable to the first even number
    do {
        printf("Even Number:- %d\n", i); 
        i = i + 2; // Increment by 2 to get the next even number
    } while(i <= 20);
    return 0; // Terminate program successfully
}
