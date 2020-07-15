```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, odd, even;
    for(scanf("%d", &n), odd = 0, even = 0;n != -1; scanf("%d", &n))
    {
        if(n % 2 == 1){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("%d %d\n", odd, even);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n, sum_odd, sum_eve;

    sum_eve = 0;
    sum_odd = 0;
    while(cin >> n&&n != -1)
    {
        if(n % 2 == 0)    sum_eve++;
        else    sum_odd++;
    }
    cout << sum_odd
         << " "
         << sum_eve
         << endl;

    return 0;
}

```
