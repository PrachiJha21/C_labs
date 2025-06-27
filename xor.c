// C Program to demonstrate use of bitwise operators

#include <stdio.h>
int main()
{
    // a = 5 (00000101 in 8-bit binary), b = 9 (00001001 in
    // 8-bit binary)
    unsigned int a = 97, b = 65;

    // The result is 00000001
    printf("a = %u, b = %u\n", a, b);
  

    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    return 0;
}