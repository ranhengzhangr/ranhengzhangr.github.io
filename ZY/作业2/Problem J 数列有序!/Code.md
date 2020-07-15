```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, m, n, p, q, mote;

    while(scanf("%d %d", &n, &m) != EOF )
    {
        int a[n + 1];

        a[n] = m;
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d ", &a[i]);
        }
        scanf("%d", &a[n - 1]);
        if (n == 0&&m == 0){
            ;
        }
        else{
            for(i = 0; i < n; i++)
            {
                p = n - i;
                q = p - 1;
                while(a[p] < a[q])
                {
                    mote = a[p];
                    a[p] = a[q];
                    a[q] = mote;
                }
            }
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("%d\n", a[n]);
        }
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

    int i, m, n;

    while(cin >> m >> n&&(m != 0||n != 0))
    {
        int A[m + 1];

        for(i = 0; i < m; i++)
        {
            cin >> A[i];
        }
        for(i = m; i > 0; i--)
        {
            A[i] = A[i - 1];
            if(A[i] <= n){
                A[i] = n;
                break;
            }
        }
        for(i = 0; i <= m; i++)
        {
            if(i > 0)    cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}

```
