```c
//GCC

#include <stdio.h>

int main(void)
{
    int r;
    float volume;

    scanf("%d", &r);
    volume= 4.0 / 3 * 3.14 * r * r * r;

    printf("volume = %.2f\n", volume);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#define pi 3.14

int main (void)
{
    using namespace std;

    cout.setf(ios::fixed);

    float r, v;
    cin >> r;
    v = pi * r * r * r * 4 / 3;
    cout << setprecision(2)
         << v
         << endl;

    return 0;
}

```
