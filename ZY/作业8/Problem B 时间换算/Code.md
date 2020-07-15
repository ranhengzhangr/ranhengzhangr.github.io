```c
//GCC

#include <stdio.h>

void out_put(int n);

int main (void)
{
    int a, h, m, s, t;

    scanf("%d:%d:%d\n%d", &h, &m, &s, &a);
    t = h * 3600 + m * 60 + s + a;
    s = t % 60;
    t /= 60;
    m = t % 60;
    h = t / 60;
    if(h > 23){
        h -= 24;
    }
    out_put(h);
    printf(":");
    out_put(m);
    printf(":");
    out_put(s);

    return 0;
}

void out_put(int n)
{
    if(n < 10){
        printf("0");
    }
    printf("%d", n);
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int n, k, h, m, s;

    cin >> h;
    cin.get();
    cin >> m;
    cin.get();
    cin >> s;
    cin >> n;
    k = h * 3600 + m * 60 + s + n;
    s = k % 60;
    k /= 60;
    m = k % 60;
    h = k / 60;
    if(h > 23)    h -= 24;
    cout << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << h
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << m
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << s
         << endl;

    return 0;
}

```
