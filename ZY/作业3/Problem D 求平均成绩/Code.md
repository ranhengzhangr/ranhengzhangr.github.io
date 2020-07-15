```c
//GCC

#include <stdio.h>

int main (void)
{
    int m, n, i1, i2;

    while(scanf("%d %d\n", &n, &m) != EOF )
    {
        int a[n][m], t = 0, u;
        float b[m], sub, pre;

        for(i1 = 0; i1 < n; i1++)
        {
            for(i2 = 0; i2 < m; i2++)
            {
                scanf("%d", &a[i1][i2]);
            }
        }
        for(i1 = 0; i1 < n; i1++)
        {
            pre = 0;
            for(i2 = 0; i2 < m; i2++)
            {
                pre += a[i1][i2];
            }
            pre /= m;
            if(i1 < n - 1){
                printf("%.2f ", pre);
            }
            else{
                printf("%.2f\n", pre);
            }
        }
        for(i2 = 0; i2 < m; i2++)
        {
            sub = 0;
            for(i1 = 0; i1 < n; i1++)
            {
                sub += a[i1][i2];
            }
            sub /= n;
            b[i2] = sub;
            if(i2 < m - 1){
                printf("%.2f ", sub);
            }
            else{
                printf("%.2f\n", sub);
            }
        }
        for(i1 = 0; i1 < n; i1++)
        {
            u = 0;
            for(i2 = 0; i2 < m; i2++)
            {
                if(a[i1][i2] >= b[i2]){
                    u++;
                }
            }
            if(u == m){
                t++;
            }
        }
        printf("%d\n\n", t);
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

    int m, n, x, y, t, k;
    float sum;

    while(cin >> n >> m)
    {
        int A[n][m];
        float C[m];

        for(x = 0; x < n; x++)
        {
            for(y = 0; y < m; y++)
            {
                cin >> A[x][y];
            }
        }
        for(x = 0; x < n; x++)
        {
            sum = 0;
            for(y = 0; y < m; y++)
            {
                sum += A[x][y];
            }
            if(x > 0)    cout << " ";
            cout << fixed
                 << setprecision(2)
                 << sum / m;
        }
        cout << endl;
        for(y = 0; y < m; y++)
        {
            sum = 0;
            for(x = 0; x < n; x++)
            {
                sum += A[x][y];
            }
            C[y] = sum / n;
            if(y > 0)    cout << " ";
            cout << fixed
                 << setprecision(2)
                 << C[y];
        }
        cout << endl;
        t = 0;
        for(x = 0; x < n; x++)
        {
            k = 0;
            for(y = 0; y < m; y++)
            {
                if(A[x][y] >= C[y])    k++;
            }
            if(k == m)    t++;
        }
        cout << t
             << endl
             << endl;
    }

    return 0;
}

```
