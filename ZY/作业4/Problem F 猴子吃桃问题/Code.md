```c
//GCC

#include<stdio.h>

int main (void )
{
    int i, n, t;

    while(scanf("%d", &n) != EOF)
    {
        t = 1;
        for(i = 1;i < n;i++)
        {
            t = (t + 1) * 2;
        }
        printf("%d\n", t);
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

    int n, sum;

    cin >> n;
    sum = 1;
    while(n > 1)
    {
        sum = (sum + 1) * 2;
        n--;
    }
    cout << sum
         << endl;

    return 0;
}

```
