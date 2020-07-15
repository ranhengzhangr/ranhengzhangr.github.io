#include <stdio.h>

#include <math.h>

int main (void)
{
    float a, b ;

    scanf("%f %f", &a, &b);
    printf("%.5f\n", sqrt(a * a + b * b));

    return 0;
}
