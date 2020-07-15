```c
//GCC

#include <stdio.h>

int main (void)
{
    unsigned int n;

    scanf("%d", &n);
    n &= 255;
    printf("%d", n);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    unsigned int n;

    cin >> n;
    n &= 255;
    cout << n;

    return 0;
}

```
