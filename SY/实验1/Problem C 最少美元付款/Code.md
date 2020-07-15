```c
//GCC

#include <stdio.h>

int main(void)
{
    int x, a, b, c, d;

    scanf("%d", &x);
    a = x / 20;
    x = x % 20;
    b = x / 10;
    x = x % 10;
    c = x / 5;
    d = x % 5;

    printf("$20 bills: %d\n", a);
    printf("$10 bills: %d\n", b);
    printf("$5 bills: %d\n", c);
    printf("$1 bills: %d\n", d);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n;
    cin >> n;
    cout << "$20 bills: "
         << n / 20
         << endl;
    n %= 20;
    cout << "$10 bills: "
         << n / 10
         << endl;
    n %= 10;
    cout << "$5 bills: "
         << n / 5
         << endl
         << "$1 bills: "
         << n % 5
         << endl;

    return 0;
}

```
