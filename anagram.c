// Write a program to check if a given string is an anagram of another string
#include <stdio.h>
#include <string.h>

void sort_string(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() {
    char word1[] = "team";
    char word2[] = "meat";

    if (strlen(word1) != strlen(word2)) {
        printf("It is not an anagram\n");
        return 0;
    }

    sort_string(word1);
    sort_string(word2);

    if (strcmp(word1, word2) == 0) {
        printf("It is an anagram\n");
    } else {
        printf("It is not an anagram\n");
    }
    return 0;
}
