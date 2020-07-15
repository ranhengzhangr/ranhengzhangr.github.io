```c
//GCC

#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int a, b, t, num, sum, flag;

    scanf("%d %d", &a, &b);
    t = 1;
    num = 0;
    while(num < a)
    {
        t++;
        flag = judge(t);
        if(flag == 0){
            num++;
        }
    }
    sum = t;
    while(num < b)
    {
        t++;
        flag = judge(t);
        if(flag == 0){
            sum += t;
            num++;
        }
    }
    printf("%d\n", sum);

    return 0;
}

int judge(int n)
{
    int i, t, flag;

    flag = 0;
    if(n > 2){
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0){
                flag = 1;
            }
        }
    }

    return flag;
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

    int a, b, i, k, sum;

    cin >> a
        >> b;
    k = 1;
    sum = 0;
    for(i = 2; k <= b; i++)
    {
        if(judge(i)){
            k++;
            if(k > a)    sum += i;
        }
    }
    cout << sum
         << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, k;

    if(n < 2)    return false;
    k = sqrt(n);
    for(i = 2; i <= k; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}

```
