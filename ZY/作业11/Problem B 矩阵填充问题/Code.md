```c
//GCC

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

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, k, x, y;

    cin >> n;
    int A[n][n];

    for(i = 0, k = 1; i < n / 2; i++)
    {
        for(x = i, y = i; x < n - i - 1; x++, k++)
        {
            A[x][y] = k;
        }
        for(x = n - i - 1, y = i; y < n - i - 1; y++, k++)
        {
            A[x][y] = k;
        }
        for(x = n - i - 1, y = n - i - 1; x > i; x--, k++)
        {
            A[x][y] = k;
        }
        for(x = i, y = n - i - 1; y > i; y--, k++)
        {
            A[x][y] = k;
        }
    }
    if(n % 2 != 0){
        A[n / 2][n / 2] = k;
    }
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cout << noshowpos
                 << setw(4)
                 << right
                 << A[x][y];
        }
        cout << endl;
    }

    return 0;
}

```
