#include <stdio.h>

int main(void)
{
    int y, m ,d;
    scanf("%d/%d/%d", &m, &d, &y);

    printf("%d-%.2d-%.2d\n", y, m, d);

    return 0;
}
