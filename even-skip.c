//Wap to find the sum of the odd numbers till 100

#include<stdio.h>
int main(){
    int n, sum = 0;
    for(n = 0; n <= 100; n++){
        if(n%2!=0){
            continue;
        }
        sum = sum + n;
    }
    printf("The sum of even numbers till 100 is: %d", sum);
    return 0;
}
 