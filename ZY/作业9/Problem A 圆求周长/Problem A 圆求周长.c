#include <stdio.h>

#define N 3.14159

int main (void)
{
    float t;

    scanf("%f", &t);
    t = t * 2 * N;
    printf("%.5f\n", t);

    return 0;
}
