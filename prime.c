//WAP to find the prime number between two given numbers

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j, b, a,c;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    printf("The prime numbers between %d and %d are: ", a,b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    for (i = a; i <= b; i++)
    {
        if(i >=2){
            for(j=2; j <= sqrt(i); j++){
                if(i % j == 0){
                    break;
                }
            }
            if (j > sqrt(i)) 
            {
                printf("%d\t", i);
            }
        }
    }
    getch();
}