```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t;
    float average, max, min, sum;

    scanf("%d\n%d", &n, &t);
    sum = t, max = t, min = t;
    for(i = 1; i < n; i++)
    {
        scanf("%d", &t);
        if(max < t){
            max = t;
        }
        if(min > t){
            min = t;
        }
        sum += t;
    }
    average = sum / n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f\n", average, max, min);

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

    int i, n, k, max_k, min_k;
    float ave;

    cin >> n;
    float A[n];

    max_k = 0;
    min_k = 0;
    ave = 0;
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
        ave += A[i];
        if(A[i] > A[max_k])    max_k = i;
        if(A[i] < A[min_k])    min_k = i;
    }
    ave /= n;
    cout << "average = "
         << fixed
         << setprecision(2)
         << ave
         << endl
         << "max = "
         << fixed
         << setprecision(2)
         << A[max_k]
         << endl
         << "min = "
         << fixed
         << setprecision(2)
         << A[min_k]
         << endl;

    return 0;
}

```
