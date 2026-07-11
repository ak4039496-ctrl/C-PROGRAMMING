/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int costPrice, sellingPrice;  // Variables for cost and selling price
    int profitOrLoss;             // Variable to store result

    // Ask user to enter cost price and selling price
    printf("Enter Cost Price:- ");
    scanf("%d", &costPrice);

    printf("Enter Selling Price:- ");
    scanf("%d", &sellingPrice);

    // Print entered values
    printf("Cost Price => %d\n", costPrice);
    printf("Selling Price => %d\n", sellingPrice);

    // Profit or Loss logic using if-else
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("Profit => %d\n", profitOrLoss);
    }
    else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("Loss => %d\n", profitOrLoss);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;  // End of program
}

