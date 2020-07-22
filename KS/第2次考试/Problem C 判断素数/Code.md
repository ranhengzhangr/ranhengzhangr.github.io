```c
//GCC

#include <stdio.h>

#include <stdbool.h>

#include <math.h>

bool judger(const int t);

int main (void)
{
    int n;

    for(; ; )
    {
        scanf("%d", &n);
        if(n == -1)    break;
        if(judger(n))    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}

bool judger(const int t)
{
    if(t < 2)    return false;

    int i;

    for(i = 2; i <= sqrt(t); i++)
    {
        if(t % i == 0)    return false;
    }

    return true;
}

```

```c++
//G++

#include <iostream>

#include <cstdbool>

#include <cmath>

#include <cstdio>

bool judger(int n);

int main (void)
{
    using namespace std;

    int t;

    for(; ; )
    {
        scanf("%d", &t);
        if(t == -1)    break;
        if(judger(t)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}

bool judger(int n)
{
    using namespace std;

    if(n == 2)    return true;
    if(n < 2)    return false;
    if(n % 2 == 0)    return false;

    int i, k;

    k = sqrt(n);
    for(i = 3; i <= k; i += 2)
    {
        if(n % i == 0)    return false;
    }

    return true;
}

```
