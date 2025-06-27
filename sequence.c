//S = 1 - 1/2^2 + 1/3^2 - 1/4^2
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0f;

    printf("Enter nth term:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float term = 1.0f / (i * i);
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    printf("Sum till %dth term is: %f\n", n, sum);
    return 0;
}
