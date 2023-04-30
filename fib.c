/*
---> Calculate Fibonacci numbers
*/

#include <stdio.h>

int main(void)
{
    int x, z, i = 0;
    int y = 1;
    int num = 12;
    int a = 0;

    printf("This program calculates:");
    printf("Fibonacci numers to %d iterations\n\n", n);

    do
    {
        printf("%d\n", x);
        i++;
        z = x + y;
        x = y;
        y = z;
    } while (i < num);

    printf("\n");
}