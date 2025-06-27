// Create a program in C to find the largest element in an array.

#include <stdio.h>

int main() {
    int array[] = {1, 2, 21, 4, 16, 2};
    int len = sizeof(array) / sizeof(int);
    int max = array[0]; // Assume first element is the largest

    for (int i = 1; i < len; i++) {
        if (array[i] > max) {
            max = array[i]; // Update max if a larger element is found
        }
    }

    printf("The largest element in the array is %d", max);
    return 0;
}

  


