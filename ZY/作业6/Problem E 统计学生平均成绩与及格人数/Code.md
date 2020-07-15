```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t, cou = 0;
    float ave, sum = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        sum += t;
        if(t >= 60){
            cou++;
        }
    }
    ave = sum / n;
    printf("average = %.1f\ncount = %d\n", ave, cou);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, cou;
    float ave;

    cin >> n;
    int A[n];

    ave = 0;
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
        ave += A[i];
    }
    ave /= n;
    cou = 0;
    for(i = 0; i < n; i++)
    {
        if(A[i] >= 60)    cou++;
    }
    cout << "average = "
         << fixed
         << setprecision(1)
         << ave
         << endl
         << "count = "
         << cou
         << endl;

    return 0;
}

```
