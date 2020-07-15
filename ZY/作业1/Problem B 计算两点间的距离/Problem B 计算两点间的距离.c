#include <math.h>

#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2, p, q, n;

    while(scanf("%f %f %f %f", &x1, &y1, &x2, &y2) != EOF)
    {
        p = x1 - x2;
        q = y1 - y2;
        n = sqrt(p * p + q * q);
        printf("%.2f\n", n);
    }

    return 0;
}
