// Write a C program to print the day of the week based on user input (1-7) using a switch statement, with validation for invalid input.
#include<stdio.h>

int main(){
    int day; //1-sun, 2-mon, ...
    printf("enter day(1-7):");
    scanf("%d", &day);

    switch (day){
        case 1: printf("Its Sunday\n");
                break;
        case 2: printf("monday\n");
                break;
        case 3: printf("tuesday\n");
                break;
        case 4: printf("wednesday\n");
                break;
        case 5: printf("thursday\n");
                break;
        case 6: printf("friday\n");
                break;
        case 7: printf("saturday\n");
                break;
        default: printf("INVALID INPUT!\n");
    }
    return 0;
}

/*switch syntax

switch(number/character){

    case C1: //do something
        break;
    case C2: //do something
        break;
    default: //do something
}

properties of switch
    a. cases can be in any order
    b. nested switch(switch inside switch) are allowed.    
    */