#include <stdio.h>

#define N 3.14159

int main (void)
{
    float r;

    scanf("%f", &r);
    printf("%.5f\n", N * r * 2);

    return 0;
}
