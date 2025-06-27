// Write a C program to take input from the user and write it to a file.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *filePointer;
    char text[100];

    filePointer = fopen("C:\\Users\\Acer\\Desktop\\datawrite.txt", "w"); //add your file location here

    if (filePointer == NULL) {
        printf("datawrite.txt file failed to open.\n");
        return 1;
    }

    printf("Enter your text (a full line):\n");
    fgets(text, sizeof(text), stdin); // Reads a full line, including spaces

    fprintf(filePointer, "Text: %s", text);
    fclose(filePointer);

    printf("Text successfully written to file.\n");

    return 0;
}
