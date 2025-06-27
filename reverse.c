// wap to reverse  a number
#include<stdio.h>
#include<conio.h>
void main()    
{
    int n, r, rev = 0;
    
    printf("Enter a multidigit number: \n");
    scanf("%d", &n);
    
    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;

    }
    printf("The reverse is: %d", rev);
    getch();
}
