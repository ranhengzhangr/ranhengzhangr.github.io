```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, t, ra1, ra2, ra3, sum;

    scanf("%d", &n);
    t = 1; ra1 = 1, ra2 = 0, ra3 = 0;
    for(sum = ra1; sum < n; t++)
    {
        ra3 += ra2;
        ra2 = ra1;
        ra1 = ra3;
        sum = ra1 + ra2 + ra3;
    }
    printf("%d\n", t);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n, T, R1, R2, R3;

    cin >> n;
    R1 = 1;
    R2 = 0;
    R3 = 0;
    T = 1;
    while(R1 + R2 + R3 < n)
    {
        R3 += R2;
        R2 = R1;
        R1 = R3;
        T++;
    }
    cout << T
         << endl;

    return 0;
}

```
