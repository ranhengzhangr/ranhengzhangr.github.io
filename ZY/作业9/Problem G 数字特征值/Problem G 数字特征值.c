#include <stdio.h>

int main (void)
{
    int a[7] = {0}, i, n, u, bit, exp, flag_bit, flag_u, sum;

    scanf("%d", &n);
    for(i = 0, u = 1; n > 0; i++, u++)
    {
        bit = n % 10;
        n /= 10;
        flag_bit = bit % 2;
        flag_u = u % 2;
        a[i] = 1 - (flag_bit + flag_u) % 2;
    }
    for(exp = 1, sum = 0, i = 0; i < 7; i++, exp *= 2)
    {
        sum += exp * a[i];
    }
    printf("%d\n", sum);

    return 0;
}
