```c
//GCC

#include <stdio.h>

int main (void)
{
    int i = 1, u = 3;
    float n;
    double t = 1, sum = 1;

    scanf("%f", &n);
    while(t * i / u >= n)
    {
        t = t * i / u;
        sum += t;
        i++, u += 2;
    }
    sum *= 2;
    printf("%.6f", sum);

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
    double n, k, sum;

    cin >> n;
    k = 1;
    sum = 0;
    i = 1;
    while(k >= n)
    {
        sum += k;
        k *= i;
        k /= 2 * i + 1;
        i++;
    }
    cout << fixed
         << setprecision(6)
         << sum * 2
         << endl;

    return 0;
}

```
