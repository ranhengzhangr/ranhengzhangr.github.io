```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, p, q,  t;
    float d, r;

    while (scanf("%d", &n) != EOF)
    {
    int a[100] = {0};

    r = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d", &t);
        a[i] = t;
    }
    for(p = 0;p < n;p++)
    {
        for(q = p;q < n;q++)
        {
            if(a[p] < a[q]){
                t = a[p];
                a[p] = a[q];
                a[q] = t;
            }
            else{
                ;
            }
        }
    }
    n -= 1;
    for(i = 1;i < n;i++)
    {
        r += a[i];
    }
    d = r / (n - 1);
    printf("%.2f\n", d);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

void quick_sort(int A[], int len);

int main (void)
{
    using namespace std;

    int i, n;
    float t;

    while(cin >> n)
    {
        if(n <= 100&&n > 2){
            int A[n];

            for(i = 0; i < n; i++)
            {
                cin >> A[i];
            }
            quick_sort(A, n);
            t = 0;
            for(i = 1; i < n - 1; i++)
            {
                t += A[i];
            }
            t /= n - 2;
            cout << fixed
                 << setprecision(2)
                 << t
                 << endl;
            }
    }

    return 0;
}

void quick_sort(int A[], int len)
{
    using namespace std;

    int i, t, mote;

    if(len == 1)    return;
    t = 0;
    for(i = 1; i < len; i++)
    {
        if(A[i] > A[t]){
            t = i;
        }
    }
    mote = A[len - 1], A[len - 1] = A[t], A[t] = mote;
    quick_sort(A, len - 1);
}

```
