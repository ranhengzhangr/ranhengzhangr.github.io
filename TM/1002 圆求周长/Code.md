```c
//GCC

#include <stdio.h>

#define N 3.14159

int main (void)
{
    float r;

    scanf("%f", &r);
    printf("%.5f\n", N * r * 2);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#define N 3.14159

int main (void)
{
    using namespace std;

    float t;
    cin >> t;
    t *= 2;
    t *= N;
    cout << fixed
         << setprecision(5)
         << t
         <<endl;

    return 0;
}

```
