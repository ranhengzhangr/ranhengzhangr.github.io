```c
//GCC

#include <stdio.h>

#include <math.h>

int perfect_number(int n);

int main (void)
{
    int i, m, n, u, flag;

    scanf("%d %d", &n, &m);
    for(i = n, u = 0; i <= m; i++)
    {
        if(i > 1){
            flag = perfect_number(i);
            if(flag == 1){
                if(u > 0){
                    printf(" ");
                }
                printf("%d", i);
                u++;
                flag = 0;
            }
        }
    }
    if(u == 0){
        printf("NIL");
    }
    printf("\n");

    return 0;
}

int perfect_number(int n)
{
    int i, t, sum;

    t = sqrt(n);
    for(i = 2, sum = 1; i <= t; i++)
    {
        if(n % i == 0){
            sum += i;
            if(n / i != i){
                sum += n / i;
            }
        }
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

```

```c++
//G++

#include <iostream>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, n, m, k;

    cin >> n
        >> m;
    k = 0;
    for(i = n; i <= m; i++)
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

    int i, k;

    if(n < 6)    return false;
    k = 1;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0){
            k += i;
        }
    }
    if(k == n)    return true;
    else    return false;
}

```
