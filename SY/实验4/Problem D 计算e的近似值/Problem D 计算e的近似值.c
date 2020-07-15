#include <stdio.h>

int main (void)
{
    double n, e;
    long long a;
    int b;

    e = 1.0;
    a = 1;
    b = 1;
    scanf ("%lf", &n);
    while ((1.0 / a) > n)
    {
        e = e + 1.0 / a;
        b++;
        a = a * b;
    }
    printf ("%.6f", e);

    return 0;
}
