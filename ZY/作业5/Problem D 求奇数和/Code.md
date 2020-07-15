```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, sum = 0;

    scanf("%d", &n);
    for(; n > 0; scanf("%d", &n))
    {
        if(n % 2 != 0){
            sum += n;
        }
    }
    printf("%d", sum);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n, sum;

    sum = 0;
    while(cin >> n&&n > 0)
    {
        if(n % 2 != 0)    sum += n;
    }
    cout << sum
         << endl;

    return 0;
}

```
