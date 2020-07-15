```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t;

    t = 4;
    scanf("%d", &n);
    for (i = 2; t <= n; i++)
    {
        printf("%d\n", t);
        t = 4 * i * i;
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n;

    cin >> n;
    i = 1;
    while((4 * i * i) <= 100)
    {
        cout << 4 * i * i
             << endl;
        i++;
    }

    return 0;
}

```
