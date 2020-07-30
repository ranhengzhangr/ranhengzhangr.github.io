```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, k;

    scanf("%d", &n);
    for(k = 0; n != 1; k++)
    {
        if(n % 2 != 0)    n = n * 3 + 1;
        n /= 2;
    }
    printf("%d\n", k);

    return 0;
}

```

```c++
//G++

#include <iostream>

int killer_queen(int t);

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    cout << killer_queen(n)
         << endl;

    return 0;
}

int killer_queen(int t)
{
    using namespace std;

    int i = 0;

    while(t != 1)
    {
        if(t % 2 != 0)    t = t * 3 + 1;
        t /= 2;
        i++;
    }

    return i;
}

```
