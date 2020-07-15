```c
//GCC

#include <stdio.h>

int main (void)
{
    double n, e;
    long long a;
    int b;

    e = 1.0;
    a = 1;
    b = 1;
    scanf ("%lf", &n);
    while ((1.0 / a) > n)
    {
        e = e + 1.0 / a;
        b++;
        a = a * b;
    }
    printf ("%.6f", e);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i;
    double t, n, e;

    i = 1;
    e = 1;
    t = 1;
    cin >> n;
    while(t > n)
    {
        e += t;
        i++;
        t *= 1.0 / i;
    }
    cout << fixed
         << setprecision(6)
         << e
         << endl;

    return 0;
}

```
