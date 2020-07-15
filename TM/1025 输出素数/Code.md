```c
//GCC

#include <stdio.h>

#include <math.h>

int main (void)
{
    int a, b, i, n, k, t, flag;

    while(scanf("%d %d", &a, &b)==2)
    {
        k = 0;
        for(i = a; i <= b; i++)
        {
            t = sqrt(i);
            if(i < 2)    flag = -1;
            else    flag = 1;
            for(n = 2; n <= t; n++)
            {
                if(i % n == 0)    flag = -1;
            }
            if(flag == 1){
                if(k > 0)    printf(" ");
                printf("%d", i);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int a, b, i, k;

    while(cin >> a >> b)
    {
        k = 0;
        for(i = a; i <= b; i++)
        {
            if(judge(i)){
                if(k > 0)    cout << " ";
                cout << i;
                k++;
            }
        }
        cout << endl;
    }

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, t;

    t = sqrt(n);
    if(n < 2)    return false;
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}

```
