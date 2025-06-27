// Write a C program to check scholarship eligibility based on a student's marks and family income.


#include<stdio.h>
#include<conio.h>
void main()
{
    int m,f;

    printf("Enter marks of the student:\n");
    scanf("%d", &m);

    printf("Enter your family income:\n");
    scanf("%d", &f);

    printf("Income = %d\n Marks = %d\n", f, m);

    if( m >= 90 && m <= 100){
        if( f <= 10000){
            printf("You are eligible for Scholarship! Congrats!!");
        }
        else{
            printf("You family income makes you ineligible for scholarship.");
        }
    }
    else if(m < 90){
        printf("Your marks makes you ineligible for scholarship.");
    }
    else{
        printf("Invalid Input: You entered marks greater than 100.");
    }
}