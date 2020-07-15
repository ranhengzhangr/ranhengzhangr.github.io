```c
//GCC

#include <stdio.h>

int main (void)
{
    int A[10], i, n, t, k, sum;

    sum = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    for(i = 0; i < sum; i++)
    {
        if(i == 0){
            k = 1;
        }
        else{
            k = 0;
        }
        for(; k < 10; k++)
        {
            if(A[k] != 0){
                A[k]--;
                t = k;
                break;
            }
        }
        printf("%d", t);
    }
    printf("\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

int A[10], sum;
int *list;

void build();

void read();

void print();

int main (void)
{
    using namespace std;

    read();
    build();
    print();

    return 0;
}

void build()
{
    using namespace std;

    int i, k;

    list = new int[sum];
    for(i = 0; i < sum; i++)
    {
        if(i == 0){
            k = 1;
        }
        else{
            k = 0;
        }
        for(; k < 10; k++)
        {
            if(A[k] != 0){
                list[i] = k;
                A[k]--;
                break;
            }
        }
    }
}

void read()
{
    using namespace std;

    int i;

    sum = 0;
    for(i = 0; i < 10; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
}

void print()
{
    using namespace std;

    int i;

    for(i = 0; i < sum; i++)
    {
        cout << list[i];
    }
    cout << endl;
}

```
