//Wap to convert user input decimal number to binary 
#include <stdio.h>
int main() {
    int decimal, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Conversion: Decimal to Binary
    while (decimal > 0) {
        binary[i] = decimal % 2;  // Store remainder (0 or 1)
        decimal = decimal / 2;
        i++;
    }

    // Output: print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
   // printf("\n");

    return 0;
}