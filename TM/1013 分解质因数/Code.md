```c
//GCC

#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int i, n, k, fure, mote, flag;

    scanf("%d", &n);
    printf("%d=", n);
    k = 0;
    while(n > 1)
    {
        i = 1;
        flag = 0;
        while(flag == 0)
        {
            i++;
            mote = judge(i);
            if(mote == 0){
                fure = n % i;
                if(fure == 0){
                    flag = 1;
                }
            }
        }
        if(k > 0){
            printf("*");
        }
        printf("%d", i);
        k++;
        n /= i;
    }

    return 0;
}

int judge(int n)
{
    int i, t, k, flag;

    if(n < 2){
        flag = 1;
    }
    else{
        flag = 0;
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0){
                if(n % i == 0){
                    flag = 1;
                }
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

    int i, k, n;

    cin >> n;
    cout << n
         << "=";
    k = 0;
    while(n > 1)
    {
        for(i = 2; i <= n; i++)
        {
            if(judge(i)&&n % i == 0){
                if(k > 0)    cout << "*";
                cout << i;
                n /= i;
                k++;
                break;
            }
        }
    }
    cout << endl;

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
