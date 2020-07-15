```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, a, b, c;

    scanf("%d", &n);
    a = n % 10;
    n /= 10;
    b = n % 10;
    c = n / 10;
    n = c + 10 * b + 100 * a;
    printf("%d\n", n);
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, c, n;

    cin >> n;
    a = n % 10;
    n /= 10;
    b = n % 10;
    c = n / 10;
    n = c + b * 10 + a * 100;
    cout << n
         << endl;

    return 0;
}

```
