```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, m, n, x, y, r;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m > n){
            r = m;
            m = n;
            n = r;
        }
        x = 0, y = 0;
        for (i = m;i <= n;i++){
            if (i % 2 == 0){
                x = x + i * i;
            }
            else{
                y = y + i * i * i;
            }
        }
        printf("%d %d\n", x, y);
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

    long int a, b, i, p, q;

    while(cin >> a >> b)
    {
        p = 0;
        q = 0;
        for(i = a; i <= b; i++)
        {
            if(i % 2 == 0)    p += i * i;
            else    q += i * i * i;
        }
        cout << p
             << " "
             << q
             << endl;
    }

    return 0;
}

```
