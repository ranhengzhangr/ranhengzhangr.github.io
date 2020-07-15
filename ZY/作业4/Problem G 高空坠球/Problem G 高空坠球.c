#include <stdio.h>

int main (void)
{
    int n, i = 1;
    double sum = 0, last;

    scanf("%lf %d", &last, &n);
    for(i = 0; i < n; i++)
    {
        sum += last;
        last /= 2;
        sum += last;
    }
    sum -= last;
    printf("%.1f %.1f", sum, last);

    return 0;
}
