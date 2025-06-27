//WAP to find the factorial of a user input number using recursion
#include<stdio.h>

int fact(int k ){
    if (k >0){
        return k * fact (k-1);
    } else{
        return 1;
    }
}

void main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int result = fact(num);
    printf("%d", result);
}