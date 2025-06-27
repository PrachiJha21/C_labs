// Write a C program to read a paragraph from the user, count the number of characters, lines, and tabs, and save the paragraph to a file.
#include <stdio.h>
#include<string.h>
int main() {
    FILE *file = fopen("paragraph.txt", "w");
    char ch;
    int chars = 0, lines = 0, tabs = 0;
    char separators[]= "!.?";
    
    printf("Enter your paragraph (press Enter to end):\n");
    
    while ((ch = getchar()) != '\n') {
        for(int i=0; i<strlen(separators);i++){
            if (ch == separators[i]) {
                lines++;
            }
        }
        if (ch == '\t')
        { tabs++;
        }
        chars++;
        fputc(ch, file);
    }
    
    fclose(file);
    
    printf("\nCount results:\n");
    printf("Characters: %d\n", chars);
    printf("Lines: %d\n", lines);
    printf("Tabs: %d\n", tabs);
    
    return 0;
}