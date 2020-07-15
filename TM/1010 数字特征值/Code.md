```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, k, sum = 0, powe = 1, place = 1;

    scanf("%d", &n);
    while(n > 0)
    {
        k = n % 10;
        sum += powe * (1 - (k + place) % 2);
        place++;
        powe *= 2;
        n /= 10;
    }
    printf("%d\n", sum);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n, k, sum = 0, powe = 1, place = 1;

    cin >> n;
    while(n > 0)
    {
        k = n % 10;
        sum += powe * (1 - (k + place) % 2);
        place++;
        powe *= 2;
        n /= 10;
    }
    cout << sum
         << endl;

    return 0;
}

```
