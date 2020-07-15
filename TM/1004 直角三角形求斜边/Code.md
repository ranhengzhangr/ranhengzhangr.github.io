```c
//GCC

#include <stdio.h>

#include <math.h>

int main (void)
{
    float a, b ;

    scanf("%f %f", &a, &b);
    printf("%.5f\n", sqrt(a * a + b * b));

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

    float a, b, c;

    cin >> a
        >> b;
    c = sqrt(a * a + b * b);
    cout << fixed
         << setprecision(5)
         << c
         << endl;

    return 0;
}

```
