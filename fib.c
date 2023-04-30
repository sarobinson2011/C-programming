#include <stdio.h>

int main(void)
{
    int x, z, i = 0;
    int y = 1;
    int n = 13;

    printf("Fibonacci numers to %d iterations\n\n", n);

    do
    {
        printf("%d\n", x);
        i++;
        z = x + y;
        x = y;
        y = z;
    } while (i < n);

    printf("\n");
}