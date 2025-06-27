//Wap to check if the number is armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int num, ogNum, rem, n = 0;
    double result = 0.0;

    // Get input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    ogNum = num;

        // Count number of digits
        while (ogNum != 0) {
            ogNum /= 10;
            ++n;
        }

    ogNum = num;

    // Calculate the sum of digits raised to the power n
    while (ogNum != 0) {
        rem = ogNum % 10;
        result += pow(rem, n);
        ogNum /= 10;
    }

    // Check if the number is Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}



