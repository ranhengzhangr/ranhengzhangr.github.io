#include <stdio.h>

int main (void)
{
    int i = 1, u = 3;
    float n;
    double t = 1, sum = 1;

    scanf("%f", &n);
    while(t * i / u >= n)
    {
        t = t * i / u;
        sum += t;
        i++, u += 2;
    }
    sum *= 2;
    printf("%.6f", sum);

    return 0;
}
