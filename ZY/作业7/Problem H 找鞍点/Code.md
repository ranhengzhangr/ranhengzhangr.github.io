```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, x, y, u, r, x0, y0;

    scanf("%d", &n);
    int a[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }
    x0 = 0, u = 0;
    for(i = 0; i < n&&u == 0; i++)
    {
        y0 = i;
        for(x = 0; x < n; x++)
        {
            if(a[x][i] < a[x0][i]){
                x0 = x;
            }
        }
        r = 0;
        for(y = 0; y < n&&r == 0; y++)
        {
            if(y == y0){
                y++;
            }
            if(a[x0][y] > a[x0][y0]){
                r = 1;
            }
        }
        if(r == 0){
            u = 1;
        }
    }
    if(u == 0){
        printf("NONE\n");
    }
    else{
        printf("%d %d\n", x0, y0);
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

    int i, n, k, x, y, sum, flag;

    cin >> n;
    int A[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    flag = 0;
    for(x = 0; x < n&&flag == 0; x++)
    {
        y = 0;
        for(i = 0; i < n; i++)
        {
            if(A[x][y] < A[x][i])    y = i;
        }
        sum = 0;
        for(k = 0; k < n; k++)
        {
            if(A[x][y] > A[k][y])    sum++;
        }
        if(sum == 0)    flag = 1;
    }
    if(flag == 0){
        cout << "NONE";
    }
    else{
        cout << --x
             << " "
             << y
             << endl;
    }

    return 0;
}

```
