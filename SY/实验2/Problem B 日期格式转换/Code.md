```c
//GCC

#include <stdio.h>

int main(void)
{
    int y, m ,d;
    scanf("%d/%d/%d", &m, &d, &y);

    printf("%d-%.2d-%.2d\n", y, m, d);

    return 0;
}

```

```c++
//G++

#include <iostream>

void out_num(int n);

int main (void)
{
    using namespace std;

    int y, m, d;

    cin >> m;
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;
    cout << y
         << "-";
    out_num(m);
    cout << "-";
    out_num(d);
    cout << endl;

    return 0;
}

void out_num(int n)
{
    using namespace std;

    if(n < 10){
        cout << "0";
    }
    cout << n;
}

```
