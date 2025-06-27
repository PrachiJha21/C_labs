//wap to create an array and count vowel and words

#include<stdio.h>
#include<string.h>

void main(){
    int i, j, count = 0, k, word = 0, word_count=1;
    char array[] = "Fine ok";
    char vowel[] = "aeiouAEIOU";
    char separate[] = " .,?!";


    for (i = 0; i< strlen(array); i++){ 
        for(j = 0; j < strlen(vowel); j++){
            if(array[i]==vowel[j]){
                count++;
                break;
            }
        }
        for (k = 0; k < strlen(separate); k++){
            if(array[i] == separate[k])
            {
                word_count++;
                for( int z = 0; z < strlen(separate); z++){ 
                    if(array[i+1] == separate[z]){                 
                        word++;
                    }
                }
            }
        }
    
    }
    int total = word_count - word;
    printf("The number of words are: %d\n", total);
    printf("The number of vowels are: %d", count);
}
