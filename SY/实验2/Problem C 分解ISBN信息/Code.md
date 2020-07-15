```c
//GCC

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
    printf("GS1 prefix: %d\n", a);
    printf("Group identifier: %d\n", b);
    printf("Publisher code: %d\n", c);
    printf("Item number: %d\n", d);
    printf("Check digit: %d\n", e);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, c, d, e;

    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cin.get();
    cin >> d;
    cin.get();
    cin >> e;
    cout << "GS1 prefix: "
         << a
         << endl
         << "Group identifier: "
         << b
         << endl
         << "Publisher code: "
         << c
         << endl
         << "Item number: "
         << d
         << endl
         << "Check digit: "
         << e
         << endl;

    return 0;
}

```
