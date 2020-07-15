#include <stdio.h>

int main (void)
{
    int n, a, b, c;

    scanf("%d", &n);
    a = n % 10;
    n /= 10;
    b = n % 10;
    c = n / 10;
    n = c + 10 * b + 100 * a;
    printf("%d\n", n);
}
