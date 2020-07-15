```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t, x, y;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        int a[t][t], u;

        u = 0;
        for(x = 0; x < t; x++)
        {
            for(y = 0; y < t; y++)
            {
                scanf("%d", &a[x][y]);
                if(x > y){
                    if(a[x][y] != 0){
                        u = 1;
                    }
                }
            }
        }
        if(u == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
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

    int i, n, k, x, y, flag;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        int A[k][k];

        for(x = 0; x < k; x++)
        {
            for(y = 0; y < k; y++)
            {
                cin >> A[x][y];
            }
        }
        flag = 0;
        for(x = 1; x < k; x++)
        {
            for(y = 0; y < x; y++)
            {
                if(A[x][y] != 0)    flag = 1;
            }
        }
        if(flag == 0)    cout << "YES";
        else    cout << "NO";
        cout << endl;
    }

    return 0;
}

```
