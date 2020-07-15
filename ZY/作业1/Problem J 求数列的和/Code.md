```c
//GCC

#include <stdio.h>

int main (void)
{
    int m, n, i;
    double t, r;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        t = n;
        r = n;
        for(i = 1;i < m;i++)
        {
            r = sqrt(r);
            t += r;
        }
        printf ("%.2f\n", t);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    int i, n;
    float k, t;

    while(cin >> t >> n)
    {
        k = 0;
        for(i = 0; i < n; i++)
        {
            k += t;
            t = sqrt(t);
        }
        cout << fixed
             << setprecision(2)
             << k
             << endl;
    }

    return 0;
}

```
