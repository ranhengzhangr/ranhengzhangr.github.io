```c
//GCC

#include <stdio.h>

int digit(int n, int k);

int main (void)
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", digit(a, b));
    }

    return 0;
}

int digit(int n, int k)
{
    int i, t, x;

    x = n;
    for(i = 0;x != 0;i++)
    {
        x /= 10;
    }
    while(k > i)
    {
        return 0;
    }
    for(i = 0;i < k;i++)
    {
        t = n % 10;
        n /= 10;
    }

    return t;
}

```

```c++
//G++

#include <iostream>

int digit(int n, int k);

int main (void)
{
    using namespace std;

    int a, b;

    while (cin >> a >> b)
    {
        cout << digit(a, b)
             << endl;
    }

    return 0;
}

int digit(int n, int k)
{
    using namespace std;

    int i, t;

    for(i = 0; i < k; i++)
    {
        t = n % 10;
        n /= 10;
    }

    return t;
}

```
