// Write a C program to input details of colleges, sort them alphabetically by name, and display the sorted list.

#include <stdio.h>
#include <string.h>


// Structure definition   
struct college {
    char Name[50];
    char location[50];
    int estDate;
};

void main() {
    struct college c[10];
    int i, j;
    struct college temp;

    // Reading employee records
    printf("Enter details for 2 college:\n");
    for (i = 0; i < 2; i++) {
        printf("Name: ");
        scanf("%s", c[i].Name);  // Read string with spaces
        
        printf("Date: ");
        scanf("%d", &c[i].estDate);

        printf("Location: ");
        scanf("%s", c[i].location);
    }

    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 2; j++) {
            if (strcmp(c[i].Name, c[j].Name) > 0) {
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }
    // Displaying the sorted employee records
    printf("College Records in Ascending Order alphabetically:\n");
    printf("S.No\t Name \t\tLocation\t\tYear\n");
    for (i = 0; i < 2; i++) {
        printf("%d\t %s \t\t%s\t\t%d\n", i + 1, 
            c[i].Name, 
            c[i].location, 
            c[i].estDate);
    }
}

