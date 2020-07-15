```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, i = 1;
    double sum = 0, last;

    scanf("%lf %d", &last, &n);
    for(i = 0; i < n; i++)
    {
        sum += last;
        last /= 2;
        sum += last;
    }
    sum -= last;
    printf("%.1f %.1f", sum, last);

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

    int n;
    float h, sum;

    cin >> h
        >> n;
    sum = 0;
    while(n > 0)
    {
        sum += h;
        h /= 2.0;
        sum += h;
        n--;
    }
    sum -= h;
    cout << fixed
         << setprecision(1)
         << sum
         << " "
         << fixed
         << setprecision(1)
         << h
         << endl;

    return 0;
}

```
