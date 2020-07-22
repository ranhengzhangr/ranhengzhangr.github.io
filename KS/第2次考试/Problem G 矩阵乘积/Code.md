```c
//GCC

#include <stdio.h>

int main (void)
{
    int i1, i2, m, n, k, r, sum;

    scanf("%d %d %d", &m, &n, &k);
    int A[m][n], B[n][k], C[m][k];

    for(i1 = 0; i1 < m; i1++)
    {
        for(i2 = 0; i2 < n; i2++)
        {
            scanf("%d", &A[i1][i2]);
        }
    }
    for(i1 = 0; i1 < n; i1++)
    {
        for(i2 = 0; i2 < k; i2++)
        {
            scanf("%d", &B[i1][i2]);
        }
    }
    for(i1 = 0; i1 < m; i1++)
    {
        for(i2 = 0; i2 < k; i2++)
        {
            sum = 0;
            for(r = 0; r < n; r++)
            {
                sum += A[i1][r] * B[r][i2];
            }
            C[i1][i2] = sum;
        }
    }
    for(i1 = 0; i1 < m; i1++)
    {
        for(i2 = 0; i2 < k; i2++)
        {
            if(i2 > 0){
                printf(" ");
            }
            printf("%d", C[i1][i2]);
        }
        printf("\n");
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, m, n, k, x, y;

    cin >> m
        >> n
        >> k;
    int A[m][n], B[n][k], C[m][k];

    for(x = 0; x < m; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < k; y++)
        {
            cin >> B[x][y];
        }
    }
    for(x = 0; x < m; x++)
    {
        for(y = 0; y < k; y++)
        {
            C[x][y] = 0;
            for(i = 0; i < n; i++)
            {
                C[x][y] += A[x][i] * B[i][y];
            }
        }
    }
    for(x = 0; x < m; x++)
    {
        for(y = 0; y < k; y++)
        {
            if(y > 0)    cout << " ";
            cout << C[x][y];
        }
        cout << endl;
    }

    return 0;
}

```
