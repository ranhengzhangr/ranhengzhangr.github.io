```c
//GCC

#include <stdio.h>

int main (void)
{
    int A[20], i, t, k, sum;

    sum = 0;
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &t);
        for(k = 0; k < sum; k++)
        {
            if(A[k] == t)    break;
        }
        if(k == sum){
            A[sum] = t;
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}

```

```c++
//G++

#include <iostream>

bool find(int n, int sum);

int A[20];

int main (void)
{
    using namespace std;

    int i, n, sum;

    sum = 0;
    for(i = 0; i < 20; i++)
    {
        cin >> n;
        if(find(n, sum)){
            sum++;
        }
    }
    cout << sum
         << endl;

    return 0;
}

bool find(int n, int sum)
{
    using namespace std;

    int i;

    for(i = 0; i < sum; i++)
    {
        if(A[i] == n)    return false;
    }
    A[i] = n;

    return true;
}

```
