```c
//GCC

#include <stdio.h>

#define M 0.000001

int main (void)
{
    double x, y = 1.0, z;

    scanf ("%lf", &x);
    z = (y + x / y) / 2;
    while (((y - z) >= M * y)||((y - z) <= -M * y))
    {
        y = z;
        z = (y + x / y) / 2;
    }

    printf ("%.6f", y);

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

    double x, y, n, t;

    cin >> x;
    y = 1;
    n = x / y;
    t = (y + n) / 2;
    while(fabs(y - t) >= 0.000001)
    {
        y = t;
        n = x / y;
        t = (y + n) / 2;
    }
    cout << fixed
         << setprecision(6)
         << y
         << endl;

    return 0;
}

```
