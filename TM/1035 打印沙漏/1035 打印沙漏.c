#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    int i, k, n, sum, hell;
    char ch;

    scanf("%d %c", &sum, &ch);
    for(n = 0; (n + 1) * (n + 1) * 2 - 1 <= sum; n++);
    hell = sum;
    for(k = 1; k < n * 2; k++)
    {
        for(i = 1; i < n - abs(n - k); i++)
        {
            putchar(' ');
        }
        for(i = 0; i < abs(n - k) * 2 + 1; i++)
        {
            putchar(ch);
        }
        printf("\n");
        hell -= abs(n - k) * 2 + 1;
    }
    printf("%d\n", hell);

    return 0;
}
