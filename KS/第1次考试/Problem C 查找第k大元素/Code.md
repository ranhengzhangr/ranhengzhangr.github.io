```c
//GCC

#include <stdio.h>

void read(int a[], int n);

void sort(int a[], int n);

int find(int a[], int k);

void read(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void sort(int a[], int n)
{
    int i1, i2;

    for(i1 = 0; i1 < n; i1++)
    {
        for(i2 = i1 + 1; i2 < n; i2++)
        {
            if(a[i1] < a[i2]){
                int mote;

                mote = a[i1], a[i1] = a[i2], a[i2] = mote;
            }
        }
    }
}

int find(int a[], int k)
{
    return a[k - 1];
}

int main (void)
{
    int n, k, ans;

    scanf("%d %d", &n, &k);
    int a[n];

    read(a, n);
    sort(a, n);
    ans = find(a, k);
    printf("%d\n", ans);

    return 0;
}

```

```c++
//G++

#include <iostream>

void read(int a[], int n);

void sort(int a[], int n);

int find(int a[], int k);

void read(int a[], int n)
{
    using namespace std;

    int i;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void sort(int a[], int n)
{
    using namespace std;

    int i, k, mote;

    if(n < 2)    return;
    k = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i] < a[k])    k = i;
    }
    mote = a[k];
    a[k] = a[n - 1];
    a[n - 1] = mote;
    sort(a, n - 1);
}

int find(int a[], int k)
{
    using namespace std;

    return a[k - 1];
}

int main (void)
{
    using namespace std;

    int n, k, ans;

    cin >> n
        >> k;
    int a[n];
    read(a, n);
    sort(a, n);
    ans = find(a, k);
    cout << ans
         << endl;

    return 0;
}

```
