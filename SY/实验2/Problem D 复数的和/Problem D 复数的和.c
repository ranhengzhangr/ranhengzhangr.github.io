#include <stdio.h>

int main (void)
{
    int a, b, c, d, x, y;

    scanf("%d+%di", &a, &b);
    scanf("%d+%di", &c, &d);
    x = a + c;
    y = b + d;

    printf("(%d+%di)+(%d+%di)=%d+%di\n", a, b, c, d, x, y);

    return 0;
}
