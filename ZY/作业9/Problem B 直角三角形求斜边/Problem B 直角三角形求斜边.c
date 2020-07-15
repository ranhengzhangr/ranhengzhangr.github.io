#include <stdio.h>

#include <math.h>

int main (void)
{
    float a, b, c;

    scanf("%f %f", &a, &b);
    c = sqrt(a * a + b * b);
    printf("%.5f\n", c);

    return 0;
}
