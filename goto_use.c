/*Write a C program that reads positive integers until a negative number is entered, ignores numbers >1500, skips those divisible by both 3 and 5, stops if 42 is entered, and finally prints the valid numbers and their sum.
*/
#include <stdio.h>

int main() {
    int num, sum = 0;
    int validNumbers[100]; // Array to store valid numbers (arbitrary size)
    int count = 0;

    printf("Enter +ve number one by one. Input ends when user enters a -ve number\n");

input_prompt: // Label for goto statement
    while (1) {
        printf("Enter any number: ");
        scanf("%d", &num);

        // If the number is negative, exit the loop
        if (num < 0) {
            printf("Negative input. Exiting\n");
            break;
        }

        // If the number is greater than 1500, repeat input prompt
        if (num > 1500) {
            printf("Invalid input! Please enter a number less than or equal to 1500.\n");
            goto input_prompt;
        }

        // Skip numbers divisible by both 3 and 5
        if (num % 3 == 0 && num % 5 == 0) {
            continue;
        }

        // If the number is 42, exit the loop and display the message
        if (num == 42) {
            printf("Number 42 found. Exiting.\n");
            break;
        }

        // Add valid number to the array and calculate the sum
        validNumbers[count++] = num;
        sum += num;
    }

    // Display the valid numbers and their sum
    printf("\nValid numbers processed: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", validNumbers[i]);
    }
    printf("\nSum of valid numbers: %d\n", sum);

    return 0;
}
