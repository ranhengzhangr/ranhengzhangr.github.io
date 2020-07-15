#include <stdio.h>

int power(int x, int n);

int main()
{
    int x, n;

    scanf("%d %d", &x, &n);
    printf("%d\n", power(x, n));

    return 0;
}

int power(int x,int n)
{
    if (n == 0) return 1;
    int temp;

    temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 1) temp *= x;
    return temp;
}
