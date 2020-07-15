#include <stdio.h>

int main(void)
{
    int x, a, b, c, d;

    scanf("%d", &x);
    a = x / 20;
    x = x % 20;
    b = x / 10;
    x = x % 10;
    c = x / 5;
    d = x % 5;

    printf("$20 bills: %d\n", a);
    printf("$10 bills: %d\n", b);
    printf("$5 bills: %d\n", c);
    printf("$1 bills: %d\n", d);

    return 0;
}
