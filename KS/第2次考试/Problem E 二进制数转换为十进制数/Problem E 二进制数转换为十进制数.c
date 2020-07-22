#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, n, t, k;
    char str[33];

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        k = 0;
        scanf("%s", &str);
        for(t = 0; t < strlen(str); t++)
        {
            k *= 2;
            k += str[t] - 48;
        }
        printf("%d\n", k);
    }

    return 0;
}
