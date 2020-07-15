```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, t, x, i;

    while (scanf("%d", &n) != EOF)
    {
        x = 1;
        for (i = 0;i < n;i++)
        {
            scanf("%d", &t);
            if (t % 2 != 0){
                x *= t;
            }
        }
        printf("%d\n", x);
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

    int i, n, t, k;

    while(cin >> n)
    {
        t = 1;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            if(k % 2 != 0)    t *= k;
        }
        cout << t
             << endl;
    }

    return 0;
}

```
