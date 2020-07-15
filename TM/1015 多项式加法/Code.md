```c
//GCC

#include <stdio.h>

int main (void)
{
    int th[100] = {0}, i, n, exp, max = 0, flag;

    flag = 0;
    while(flag != 2)
    {
        scanf("%d", &exp);
        scanf("%d", &n);
        if(exp == 0){
            flag ++;
        }
        if(exp > max){
            max = exp;
        }
        th[exp] += n;
    }
    for(i = max; i > 0; i--)
    {
        if(th[i] != 0){
            printf("%dx", th[i]);
            if(i > 1){
                printf("%d", i);
            }
            printf("+");
        }
    }
    printf("%d\n", th[0]);
}

```

```c++
//G++

#include <iostream>

struct fx{
    int upper;
    int lower;
};

int main (void)
{
    using namespace std;

    int i, k, n, sum;
    struct fx gx;

    cin >> gx.upper
        >> gx.lower;
    n = gx.upper;
    int A[n + 1];

    for(i = 0; i <= gx.upper; i++)
    {
        A[i] = 0;
    }
    A[gx.upper] = gx.lower;
    if(gx.upper == 0)    sum = 1;
    else    sum = 0;
    while(sum < 2)
    {
        cin >> gx.upper
            >> gx.lower;
        A[gx.upper] += gx.lower;
        if(gx.upper == 0)    sum++;
    }
    for(i = n; i > 0; i--)
    {
        if(A[i] != 0){
            cout << A[i];
            if(i > 0)    cout << "x";
            if(i > 1)    cout << i;
            cout << "+";
        }
    }
    cout << A[0]
         << endl;

    return 0;
}

```
