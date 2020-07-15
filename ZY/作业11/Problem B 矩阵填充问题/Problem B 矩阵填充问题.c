#include <stdio.h>

int main (void)
{
    int i, n, t, u;

    scanf("%d", &n);
    int QTE[n][n];

    u = 0;
    for(i = 0; i < n / 2; i++)
    {
        for(t = i; t < n - i - 1; t++)
        {
            u++;
            QTE[t][i] = u;
        }
        for(t = i; t < n - i - 1; t++)
        {
            u++;
            QTE[n - i - 1][t] = u;
        }
        for(t = i; t < n - i - 1; t++)
        {
            u++;
            QTE[n - t - 1][n - i - 1] = u;
        }
        for(t = i; t < n - i - 1; t++)
        {
            u++;
            QTE[i][n - t - 1] = u;
        }
    }
    if(n % 2 != 0){
        QTE[n / 2][n / 2] = n * n;
    }
    for(i = 0; i < n; i++)
    {
        for(t = 0; t < n; t++)
        {
            printf("%4.d", QTE[i][t]);
        }
        printf("\n");
    }

    return 0;
}
