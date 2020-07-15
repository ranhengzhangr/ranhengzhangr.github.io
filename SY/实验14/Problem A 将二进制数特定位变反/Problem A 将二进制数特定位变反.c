#include <stdio.h>

int main (void)
{
    unsigned int n;

    scanf("%d", &n);
    n ^= 15;
    printf("%d", n);

    return 0;
}
