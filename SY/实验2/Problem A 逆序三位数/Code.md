```c
//GCC

#include <stdio.h>

int main(void)
{
    int a, b, c, n, x, y;

    scanf("%d", &n);
    a = n / 100;
    n = n % 100;
    b = n / 10;
    c = n % 10;
    x=b * 10 + a;
    y=c * 100 + b * 10 + a;
    if (b = 0, c = 0){
        printf("%d", a);
    }
    else if (c = 0){
        printf("%d", x);
    }
    else{
        printf("%d", y);
    }

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
    t = n / 100;
    n %= 100;
    t += n / 10 * 10 + n % 10 * 100;
    cout << t
         << endl;

    return 0;
}

```
