```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, m;

    while(scanf("%d %d\n", &m, &n) != EOF )
    {
        int a[m][n], b[m][n], i1, i2, p, q, s, x, y;

        for(i1 = 0; i1 < m; i1++)
        {
            for(i2 = 0; i2 < n; i2++)
            {
                scanf("%d", &a[i1][i2]);
                if(a[i1][i2] >= 0){
                    b[i1][i2] = a[i1][i2];
                }
                else{
                    b[i1][i2] = -a[i1][i2];
                }
            }
        }
        p = b[0][0], x = 0, y = 0;
        for(i1 = 0; i1 < m; i1++)
        {
            for(i2 = 0; i2 < n; i2++)
            {
                q = b[i1][i2];
                while(p < q)
                {
                    p = q;
                    x = i1, y = i2;
                }
            }
        }
        s = a[x][y];
        x++, y++;
        printf("%d %d %d\n", x, y, s);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int absolute(int n);

int main (void)
{
    using namespace std;

    int p, q, x, y, ix, iy;

    while(cin >> x >> y)
    {
        int A[x][y];

        p = 0;
        q = 0;
        for(ix = 0; ix < x; ix++)
        {
            for(iy = 0; iy < y; iy++)
            {
                cin >> A[ix][iy];
                if(absolute(A[p][q]) < absolute(A[ix][iy])){
                    p = ix;
                    q = iy;
                }
            }
        }
        cout << p + 1
             << " "
             << q + 1
             << " "
             << A[p][q]
             << endl;
    }

    return 0;
}

int absolute(int n)
{
    using namespace std;

    if(n < 0)    return -n;
    else    return n;
}

```
