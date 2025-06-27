//wap to get numbers from user and then sum first two numbers and then sum all 3 numbers
#include<stdio.h>

int sum_two(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}
int sum_three(int x, int y, int z){
    int sum;
    sum = x+y+z;
    return sum;
}

void main(){
    int num1, num2, num3, sum2, sum3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum2 = sum_two(num1,num2);
    sum3 = sum_three(num1, num2, num3);

    printf("The sum of first two numbers %d and %d is %d\n", num1, num2, sum2);
    printf("The sum of all numbers %d, %d and %d is %d", num1, num2, num3, sum3);
}


