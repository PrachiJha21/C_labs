// print
/*

*
**
***
****
*****

*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char i, j;
    for (i = 1; i <= 5; i++) {
      for (j = 1; j <= i; j++) {
         printf("*");
      }
        printf("\n");
    }
    getch();
}