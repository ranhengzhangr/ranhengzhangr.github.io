```c
//GCC

#include <stdio.h>

int main (void)
{
    int n;

    while (scanf("%d", &n) != EOF )
    {
        int a[n], b, c, i, t, u = 0, mote, foce;

        if(n == 0){
            return 0;
        }
        else{
            for (i = 0; i < n; i++)
            {
                scanf(" %d", &t);
                a[i] = t;
            }
            b = a[0];
            for (i = 1; i < n; i++)
            {
                c = a[i];
                while(c < b)
                {
                    mote = b;
                    b = c;
                    c = mote;
                    u = i;
                }
            }
            foce = a[0];
            a[0] = a[u];
            a[u] = foce;
            n--;
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

    int i, n, k, mote;

    while(cin >> n&&n != 0)
    {
        int A[n];

        for(i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        k = 0;
        for(i = 1; i < n; i++)
        {
            if(A[k] > A[i])    k = i;
        }
        mote = A[0], A[0] = A[k], A[k] = mote;
        for(i = 0; i < n; i++)
        {
            if(i > 0)    cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}

```
