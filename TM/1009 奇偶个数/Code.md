```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, sum1 = 0, sum2 = 0;

    while(scanf("%d", &n) != EOF&& n != -1)
    {
        if(n % 2 == 1){
            sum1++;
        }
        else{
            sum2++;
        }
    }
    printf("%d %d\n", sum1, sum2);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, k;

    a = 0;
    b = 0;
    while(cin >> k&&k != -1)
    {
        if(k % 2 == 0)    a++;
        else    b++;
    }
    cout << b
         << " "
         << a
         << endl;

    return 0;
}

```
