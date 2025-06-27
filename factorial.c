//wap simple factorial program

#include<stdio.h>
#include<conio.h>
void main()
{
    int fact =1, n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    while(n>0)
    {
        fact = fact * n;
        n--;
    }
    printf("The factorial is: %ld", fact);
}