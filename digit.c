// Write a C program to repeatedly sum the digits of a multi-digit number until a single-digit result is obtained.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sum = 0;

    printf("Enter a multidigit number: ");
    scanf("%ld", &n);

    while (n >= 10)
    {
        while (n>0)
        {
            sum += n % 10;
            n /= 10;
        }
        n=sum;
    }
    printf("The sum of digits is: %ld", n);

    getch();
} 