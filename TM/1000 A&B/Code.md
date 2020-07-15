```c
//GCC

#include <stdio.h>

int main (void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int a, b;

    cin >> a
        >> b;
    cout << a + b
         << endl;

    return 0;
}

```
