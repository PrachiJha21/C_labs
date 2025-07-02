/*write a program to calculate the factorial of a number using call by reference to
store the result in the caller function*/


#include<stdio.h>
#include<conio.h>
int factx(int n, int fact){
    fact = 1;
    while(n > 0){
        fact = fact *n;
        n--;
    }
    //printf("Insider Function Factorial: %d\n", fact);
    return fact;
}

void main(){
    int x, y;
    printf("Enter number:");
    scanf("%d", &x);

    y = factx(x, y);
    printf("The factorial of %d is %d", x, y);
    getch();
}
