```c
//GCC

#include <stdio.h>

void quick_sort(int cous[], int i, int j);

void quick_sort(int cous[], int i, int j)
{
    int p, q, k, mote;

    if(i > j){
        return;
    }
    p = i;
    q = j;
    k = i;
    for(; ; )
    {
        while(q > p&&cous[q] >= cous[k])
        {
            q--;
        }
        if(q <= p){
            break;
        }
        while(q > p&&cous[p] <= cous[k])
        {
            p++;
        }
        if(q <= p){
            break;
        }
        mote = cous[p], cous[p] = cous[q], cous[q] = mote;
    }
    mote = cous[k], cous[k] = cous[p], cous[p] = mote;
    k = p;
    quick_sort(cous, i, k - 1);
    quick_sort(cous, k + 1, j);
}

int main (void)
{
     int i, n;

     scanf("%d", &n);
     int cous[n];

     for(i = 0; i < n; i++)
     {
         scanf("%d", &cous[i]);
     }
     quick_sort(cous, 0, n - 1);
     for(i = 0; i < n; i++)
     {
         if(i > 0){
            printf(" ");
         }
         printf("%d", cous[i]);
     }
     printf("\n");

     return 0;
}

```

```c++
//G++

#include <iostream>

void quick_sort(int A[], int j, int k);

int main (void)
{
    using namespace std;

    int i, n;

    cin >> n;
    int A[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    quick_sort(A, 0, n - 1);
    for(i = 0; i < n; i++)
    {
        if(i > 0)    cout << " ";
        cout << A[i];
    }
    cout << endl;

    return 0;
}

void quick_sort(int A[], int j, int k)
{
    using namespace std;

    int i, p, q, mote;

    if(j > k)    return;
    p = j;
    q = k;
    for(; ; )
    {
        while(A[p] <= A[k]&&p < q)
        {
            p++;
        }
        if(p >= q)    break;
        while(A[q] >= A[k]&&p < q)
        {
            q--;
        }
        if(p >= q)    break;
        mote = A[p];
        A[p] = A[q];
        A[q] = mote;
    }
    mote = A[k];
    A[k] = A[q];
    A[q] = mote;
    quick_sort(A, p + 1, k);
    quick_sort(A, j, p - 1);
}

```
