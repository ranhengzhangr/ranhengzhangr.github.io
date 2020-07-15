```c
//GCC

#include <stdio.h>

int main (void)
{
    int m, n, p, q, s, t, x, y;

    while(scanf ("%d/%d", &m, &n) != EOF)
    {
        x = m, y = n, s = 1;
        while(s > 0)
        {
            if(x >= y){
                t = y;
                x = x % y;
                s = x;
            }
            else{
                t = x;
                y = y % x;
                s = y;
            }
        }
        p = m / t;
        q = n / t;
        printf("%d/%d\n", p, q);
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

    int a, b, x, y, t;

    cin >> x;
    cin.get();
    cin >> y;
    if(x > y)
        a = x, b = y;
    else
        a = y, b = x;
    while(b > 0)
    {
        a %= b;
        if(a < b)
            t = a, a = b, b = t;
        t = a;
    }
    cout << x / t
         << "/"
         << y / t
         << endl;

    return 0;
}

```
