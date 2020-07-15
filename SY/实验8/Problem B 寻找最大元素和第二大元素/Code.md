```c
//GCC

#include <stdio.h>

#define N 100

void find_two_largest(const int a[],int n,int *largest,int *second_largest);

int main (void)
{
    int a[N], len;
    int largest, second_largest;

    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    find_two_largest(a, len, &largest, &second_largest);
    printf("%d %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(const int a[],int n,int *largest,int *second_largest)
{
    int i, t;

    *largest = a[0];
    *second_largest = a[1];
    for (i = 0; i <= n; i++)
    {
        if(a[i] > *largest){
            *largest = a[i];
            t = i;
        }
    }
    for (i = 0; i <= n; i++){
        if(a[i] > *second_largest&&i != t){
            *second_largest = a[i];
        }
    }
}

```

```c++
//G++

#include <iostream>

#define N 100

void find_two_largest(const int a[],int n,int *largest,int *second_largest);

int main (void)
{
    using namespace std;

    int a[N], len;
    int largest, second_largest;

    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    find_two_largest(a, len, &largest, &second_largest);
    cout << largest
         << " "
         << second_largest
         << endl;

    return 0;
}

void find_two_largest(const int a[],int n,int *largest,int *second_largest)
{
    using namespace std;

    int i;

    if(a[0] > a[1]){
        *largest = a[0];
        *second_largest = a[1];
    }
    else{
        *largest = a[1];
        *second_largest = a[0];
    }
    for(i = 2; i < n; i++)
    {
        if(a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i] > *second_largest){
            *second_largest = a[i];
        }
    }
}

```
