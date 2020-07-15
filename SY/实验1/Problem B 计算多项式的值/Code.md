```c
//GCC

#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d", &x);
    y = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x -x * x + 7 * x - 6;

    printf("%d\n", y);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n, t;

    cin >> n;
    t = 3 * n * n * n * n * n + 2 * n * n * n * n - 5 * n * n * n - n * n + 7 * n - 6;
    cout << t
         << endl;

    return 0;
}

```
