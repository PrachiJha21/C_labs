//WAP to find the factorial of a user input number by using call by reference

#include<stdio.h>
#include<conio.h>

int factx(int *x, int fact){
    fact = 1;

    for(int i= 1; i <= *x; i++){
        fact = fact * i;
    }
    return fact;
}

void main(){
    int x, y;
    printf("Enter number:");
    scanf("%d", &x);

    y = factx(&x, y);
    printf("The factorial of %d is %d", x, y);
    getch();
}
