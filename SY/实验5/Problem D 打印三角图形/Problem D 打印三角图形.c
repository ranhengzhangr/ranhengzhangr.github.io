#include <stdio.h>

int main (void)
{
    int n, i, t;
    char ch = 'A';

    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t = 1;
        while (t <= (n - i))
        {
            printf (" ");
            t++;
        }
        while ((t > (n - i))&&(t < (n + i)))
        {
            printf ("%c", toupper(ch+i-1));
            t++;
        }
        while (t = n + i)
        {
            printf("\n");
            break;
        }
    }

    return 0;
}
