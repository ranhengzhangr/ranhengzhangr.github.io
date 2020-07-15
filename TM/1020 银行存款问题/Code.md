```c
//GCC

#include <stdio.h>

int main (void)
{
    int i;
    float M, r;

    i = 2015 - 1980;
    scanf("%f %f", &M, &r);
    r /= 100;
    r += 1;
    while(i > 0)
    {
        M *= r;
        i--;
    }
    printf("%.2f\n", M);

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
    float capital, interest;

    cin >> capital
        >> interest;
    interest /= 100;
    interest += 1;
    for(i = 1980; i < 2015; i++)
    {
        capital *= interest;
    }
    cout << fixed
         << setprecision(2)
         << capital
         << endl;

    return 0;
}

```
