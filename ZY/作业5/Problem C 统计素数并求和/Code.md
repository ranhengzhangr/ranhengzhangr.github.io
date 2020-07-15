```c
//GCC

#include <stdio.h>

#include <math.h>

int judge(int s);

int main (void)
{
    int i, m, n, t, sum = 0, add = 0, mote;

    scanf("%d %d", &m, &n);
    if(m > n){
        mote = m, m = n, n = mote;
    }
    if(n <= 500&&m >= 1){
        for(i = m; i <= n; i++)
        {
            if(i == 1){
                i++;
            }
            t = judge(i);
            if(t == 1){
                sum += i;
                add++;
            }
        }
        printf("%d %d\n", add, sum);
    }
    else{
        ;
    }

    return 0;
}

int judge(int s)
{
    int i, r;

    r = sqrt(s);
    for(i = 2; i <= r; i++)
    {
        if(s % i == 0){
            return 0;
        }
    }

    return 1;
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

    int i, m, n, sum, add;

    cin >> m
        >> n;
    sum = 0;
    add = 0;
    for(i = m; i <= n; i++)
    {
        if(judge(i)){
            add++;
            sum += i;
        }
    }
    cout << add
         << " "
         << sum
         << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, t, flag;

    if(n < 2)    return false;
    t = sqrt(n);
    flag = 0;
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    flag = 1;
    }
    if(flag == 0)    return true;
    else    return false;
}

```
