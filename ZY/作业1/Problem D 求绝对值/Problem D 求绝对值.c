#include <stdio.h>

int main (void)
{
    float x;

    while(scanf("%f", &x) != EOF)
    {
        if (x < 0)
            x = -x;
        else
            x = x;
        printf("%.2f\n", x);
    }

    return 0;
}
