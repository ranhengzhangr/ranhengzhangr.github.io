#include <stdio.h>

int main (void)
{
    int i, t, x[10] = {0};
    long int n;

    while(scanf("%ld", &n) != EOF)
    {

        for(i = 0; n > 0; i++)
        {
            t = n % 10;
            n = n / 10;
            x[t]++;
        }
        printf("  0  1  2  3  4  5  6  7  8  9\n");
        for(i = 0; i <= 9; i++)
        {
            printf("%3d", x[i]);
        }
        printf("\n");
    }

    return 0;
}
