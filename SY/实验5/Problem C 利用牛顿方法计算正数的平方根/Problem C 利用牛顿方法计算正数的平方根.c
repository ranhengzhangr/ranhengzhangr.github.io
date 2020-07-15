#include <stdio.h>

#define M 0.000001

int main (void)
{
    double x, y = 1.0, z;

    scanf ("%lf", &x);
    z = (y + x / y) / 2;
    while (((y - z) >= M * y)||((y - z) <= -M * y))
    {
        y = z;
        z = (y + x / y) / 2;
    }

    printf ("%.6f", y);

    return 0;
}
