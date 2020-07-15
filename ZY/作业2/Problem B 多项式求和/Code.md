```c
//GCC

#include <stdio.h>

int pending(int n);

int main (void)
{
    int i, m;

    while (scanf("%d", &m) != EOF)
    {
        int a[100];

        for (i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
            pending(a[i]);
        }
    }

    return 0;
}

int pending(int n)
{
    int i;
    double p, q;

    p = 0;
    for (i = 1; i <= n; i++)
    {
        q = i;
        if(i % 2 == 0){
            p -= 1 / q;
        }
        else{
            p += 1 / q;
        }
    }
    printf("%.2f\n", p);

    return 1;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, l, k, flag;
    float t, sum;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> l;
        flag = 1;
        sum = 0;
        for(k = 0; k < l; k++)
        {
            t = 1.0 / (k + 1) * flag;
            sum += t;
            flag = -flag;
        }
        cout << fixed
             << setprecision(2)
             << sum
             << endl;
    }

    return 0;
}

```
