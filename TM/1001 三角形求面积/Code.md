```c
//GCC

#include <stdio.h>

int main (void)
{
    float h;

    scanf("%f", &h);
    printf("%.2f\n", h * 2);

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

    float n;

    cin >> n;
    n *= 2;
    cout << fixed
         << setprecision(2)
         << n
         << endl;

    return 0;
}

```
