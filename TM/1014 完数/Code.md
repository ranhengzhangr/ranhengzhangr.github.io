```c
//GCC

#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int i, a, b, sum = 0;

    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        if(judge(i) == 1){
            if(sum > 0){
                printf(" ");
            }
            printf("%d", i);
            sum++;
        }
    }
    if(sum == 0){
        printf("NIL");
    }
    printf("\n");

    return 0;
}

int judge(int n)
{
    int i, sum, flag;

    if(n < 6){
        flag = 0;
    }
    else{
        sum = 1;
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0){
                sum += i + n / i;
            }
        }
        if(sum == n){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }

    return flag;
}

```

```c++
//G++

#include <iostream>

bool judge(int n);

int main (void)
{
    using namespace std;

    int a, b, i, k;

    cin >> a
        >> b;
    k = 0;
    for(i = a; i <= b; i++)
    {
        if(judge(i)){
            if(k > 0)    cout << " ";
            cout << i;
            k++;
        }
    }
    if(k == 0)    cout << "NIL";
    cout << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, sum;

    if(n < 6)    return false;
    sum = 1;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)    sum += i;
    }
    if(sum == n)    return true;

    return false;
}

```
