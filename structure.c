// Write a C program to define a student structure, initialize it, display its values, update the roll number, and display the updated values.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
};

int main() {
    struct Student student1 = {"Alice", 101};  // Initialize structure
    printf("Before: %s, Roll No: %d\n", student1.name, student1.roll_no);

    // Manipulating data
    student1.roll_no = 102;  // Update roll number
    printf("After: %s, Roll No: %d\n", student1.name, student1.roll_no);

    return 0;
}
