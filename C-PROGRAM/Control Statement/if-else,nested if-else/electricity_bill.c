/*
 * Author: Amit Gupta
 * Date: 15-07-2026
 */
#include <stdio.h>
int main() {
    int units;       // Units consumed
    float bill;      // Final bill amount

    // Ask user to enter electricity units consumed
    printf("Enter electricity units consumed:- ");
    scanf("%d", &units);

    // Print entered units
    printf("Units Consumed =>  %d\n", units);

    // Slab rate calculation using if-else
    if (units <= 50) {
        bill = units * 0.50;  // First 50 units at Rs.0.50 per unit
    }
    else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);  // Next 100 units at Rs.0.75 per unit
    }
    else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);  // Next 100 units at Rs.1.20 per unit
    }
    else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);  // Above 250 units at Rs.1.50 per unit
    }

    // Add 20% surcharge
    bill = bill + (bill * 0.20);

    // Print final bill
    printf("Total Electricity Bill => Rs. %.2f\n", bill);

    return 0;  // End of program
}

