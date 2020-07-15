```c
//GCC

#include <stdio.h>

int main (void)
{
    float x;

    while(scanf("%f", &x) != EOF)
    {
        if (x < 0)
            x = -x;
        else
            x = x;
        printf("%.2f\n", x);
    }

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

    while(cin >> n)
    {
        if(n < 0)    n = -n;
        cout << fixed
             << setprecision(2)
             << n
             << endl;
    }

    return 0;
}

```
