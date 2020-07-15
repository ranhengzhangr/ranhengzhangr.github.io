```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, i1, i2, n, r, t;

    while(scanf("%d", &n) != EOF)
    {
        int m[n][n];

        for(i1 = 0; i1 < n; i1++)
        {
            for(i2 = 0; i2 < n; i2++)
            {
                scanf("%d", &m[i1][i2]);
            }
        }

        for(i = 0; i < n; i++)
        {
            t = 0;
            for(r = 0; r < n; r++)
            {
                t += m[i][r];
            }
            printf("%5d", t);
        }
        printf("\n");
        for(i = 0; i < n; i++)
        {
            t = 0;
            for(r = 0; r < n; r++)
            {
                t += m[r][i];
            }
            printf("%5d", t);
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

    int i, n, x, y, sum;

    cin >> n;
    int A[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(x = i, y = 0; y < n; y++)
        {
            sum += A[x][y];
        }
        cout << setw(5)
             << right
             << sum;
    }
    cout << endl;
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(x = 0, y = i; x < n; x++)
        {
            sum += A[x][y];
        }
        cout << setw(5)
             << right
             << sum;
    }
    cout << endl;

    return 0;
}

```
