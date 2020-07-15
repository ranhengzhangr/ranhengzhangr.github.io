```c
//GCC

#include <stdio.h>

int gcd(int m, int n);

int main (void)
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", gcd(a, b));
    }

    return 0;
}

int gcd(int m, int n)
{
    int r, t, x, y;

    x = m, y = n, r = 1;
    while(r > 0)
    {
        if(x >= y){
            t = y;
            x = x % y;
            r = x;
        }
        else{
            t = x;
            y = y % x;
            r = y;
        }
    }
    return t;
}

```

```c++
//G++

#include <iostream>

int gcd(int m, int n);

int main (void)
{
    using namespace std;

    int a, b;

    while (cin >> a >> b)
    {
        cout << gcd(a, b)
             << endl;
    }

    return 0;
}

int gcd(int m, int n)
{
    using namespace std;

    int t;

    if(m < n){
        m += n, n = m - n, m -= n;
    }
    while(n > 0)
    {
        t = n;
        m %= n;
        if(m < n){
            m += n, n = m - n, m -= n;
        }
    }

    return t;
}

```
