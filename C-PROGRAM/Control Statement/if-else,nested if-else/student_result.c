/*
 * Author: Amit Gupta
 * Date: 08-07-2026
 */

#include <stdio.h>

int main() {
    int english, math, science, history, computer;  // Marks for 5 subjects
    int total;                                      // Total marks
    float percentage;                               // Percentage

    // Ask user to enter marks of 5 subjects
    printf("Enter marks for English, Math, Science, History, Computer:- ");
    scanf("%d %d %d %d %d", &english, &math, &science, &history, &computer);

    // Print each subject mark line by line
    printf("English => %d\n", english);
    printf("Math => %d\n", math);
    printf("Science => %d\n", science);
    printf("History => %d\n", history);
    printf("Computer => %d\n", computer);

    // Calculate total and percentage
    total = english + math + science + history + computer;
    percentage = total / 5.0;

    // Print total and percentage
    printf("Total Marks => %d\n", total);
    printf("Percentage => %.2f\n", percentage);

    // Pass/Fail logic using if-else
    if (percentage >= 40) {
        printf("Result:- PASS\n");
    }
    else {
        printf("Result:- FAIL\n");
    }

    return 0;  // End of program
}

