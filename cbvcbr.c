#include <stdio.h>

// Function to find min and max using call by reference
void findMinMax(int a, int b, int *min, int *max) {
    if (a < b) {
        *min = a;
        *max = b;
    } else {
        *min = b;
        *max = a;
    }
}

void main() {
    int num1, num2, min, max;

    // Taking inputs by value
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calling function with call by value for inputs and call by reference for results
    findMinMax(num1, num2, &min, &max);

    // Displaying the results
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}
