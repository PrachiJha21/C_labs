#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int is_vowel(char ch) {
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int is_alphabet(char ch) {
                // Check if the character is an uppercase or lowercase alphabet using ASCII
                // Uppercase Letters: A to Z have ASCII values from 65 to 90.
                // Lowercase Letters: a to z have ASCII values from 97 to 122.
                // Digits: 0 to 9 have ASCII values from 48 to 57.
                // Punctuation and Symbols: Characters like !, @, #, $, etc., have ASCII values in the range 32 to 126.
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
int main() {
    FILE *file;
    char ch;
    char *vowels = malloc(100 * sizeof(char)); 
    char *consonants = malloc(100 * sizeof(char)); 
    char *words = malloc(100 * sizeof(char)); 
    char *vowelPtr = vowels, *consonantsPtr = consonants, *wordPtr = words;

    if (!vowels || !consonants || !words){
        printf("Memory allocation failed\n");
        return 1;
    }

    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open test.txt\n");
        free(vowels);
        free(consonants);
        free(words);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        *wordPtr = ch;
        *wordPtr++;
        if(is_alphabet(ch)){
            if (is_vowel(ch)) {
                *vowelPtr = ch;
                *vowelPtr++;
            } else {
                *consonantsPtr = ch;
                *consonantsPtr++;
            }
        }
    }
    //Adding the null terminator to let printf know the string ends here
    *vowelPtr = '\0';
    *consonantsPtr = '\0';
    *wordPtr = '\0';

    fclose(file);

    printf("Vowels: ");
    for (char *ptr = vowels; *ptr != '\0'; ptr++) {
        printf("%c ", *ptr);
    }
    printf("\n");

    int vowel_count = strlen(vowels);
    printf("Total vowels are %d\n", vowel_count);

    printf("Consonants: ");
    for (char *point = consonants; *point != '\0'; point++) {
        printf("%c ", *point);
    }
    printf("\n");
    printf("Total consonants are %d\n", strlen(consonants));
    printf("Complete Text: %s\n", words);


    free(vowels);
    free(consonants);
    free(words);

    return 0;
}
