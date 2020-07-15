#include <stdio.h>

int main (void)
{
    int i;
    float M, r;

    i = 2015 - 1980;
    scanf("%f %f", &M, &r);
    r /= 100;
    r += 1;
    while(i > 0)
    {
        M *= r;
        i--;
    }
    printf("%.2f\n", M);

    return 0;
}
