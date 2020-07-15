```c
//GCC

#include <stdio.h>

#define N 3.14159

int main (void)
{
    float t;

    scanf("%f", &t);
    t = t * 2 * N;
    printf("%.5f\n", t);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#define pi 3.14159

int main (void)
{
    using namespace std;

    float n;

    cin >> n;
    n *= 2 * pi;
    cout << fixed
         << setprecision(5)
         << n
         << endl;

    return 0;
}

```
