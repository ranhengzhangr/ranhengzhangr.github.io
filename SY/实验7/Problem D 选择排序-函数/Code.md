```c
//GCC

#include <stdio.h>

#define N 100

void selection_sort(int a[], int len);

int  main (void)
{
    int a[N], i = 0, len;

    while (scanf("%d", &a[i]) == 1)
    {
        i++;
    }
    len = i;
    selection_sort(a, len);
    for (i = 0; i < len; i++)
    {
        if (i == 0){
            printf("%d", a[i]);
        }
        else{
            printf(" %d", a[i]);
        }
    }
    printf("\n");

    return  0;
}

void selection_sort(int a[], int len)
{
    if (len == 1) return;
    int temp = 0,max = a[0];
    for (int i = 1; i < len; i++){
        if (a[i] > max){
            max = a[i];
            temp = i;
            }
        }
    a[temp] = a[len-1];
    a[len-1] = max;
    selection_sort(a,len-1);
}

```

```c++
//G++

#include <iostream>

#define N 100

void selection_sort(int a[], int len);

int main (void)
{
    using namespace std;

    int a[N], i = 0, len;

    while (cin >> a[i])
    {
        i++;
    }
    len = i;
    selection_sort(a, len);
    for (i = 0; i < len; i++)
    {
        if (i == 0)    cout << a[i];
        else    cout << " "
                     << a[i];
    }
    cout << endl;

    return 0;
}

void selection_sort(int a[], int len)
{
    using namespace std;

    int i, k, mote;

    if(len == 1)    return;
    k = 0;
    for(i = 0; i < len; i++)
    {
        if(a[i] > a[k]){
            k = i;
        }
    }
    mote = a[i - 1], a[i - 1] = a[k], a[k] = mote;

    selection_sort(a, len - 1);
}

```
