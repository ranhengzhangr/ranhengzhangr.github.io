#include <stdio.h>

int main (void)
{
    int n, k;

    scanf("%d", &n);
    for(k = 0; n != 1; k++)
    {
        if(n % 2 != 0)    n = n * 3 + 1;
        n /= 2;
    }
    printf("%d\n", k);

    return 0;
}
