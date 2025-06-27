// Write a C program to input an array, sort it in ascending order using pointers, print the sorted array, and display the second largest element.

#include <stdio.h>
void main() {
    int n, arr[100], i, j;
    int* ptr = arr;
    int temp;

    printf("Enter Array's size:\n");
    scanf("%d", &n);

    printf("Enter its elements\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array in ascending order using pointers
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("\t%d\n", arr[i]);
    }

    if (n >= 2) {
        printf("%d is 2nd largest.\n", *(ptr + n - 2));
    } else {
        printf("Array does not have enough elements to find 2nd largest.\n");
    }
}
