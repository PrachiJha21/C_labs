// Write a C program to assign grades (A, B, C, Fail) based on input marks with input validation.

#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n>=100){
        printf("Invalid");
    }
    else if (n>=80)
    {
        printf("A");
    }
    else if (n>=60){
        printf("B");
    }
    else if (n>=40){
        printf("C");
    }
    else{
        printf("Fail");
    }
    return 0;
}