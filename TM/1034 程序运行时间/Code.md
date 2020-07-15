```c
//GCC

#include <stdio.h>

#define CLK_TCK 100

int main (void)
{
    int C1, C2, C, hh, mm, ss;

    scanf("%d %d", &C1, &C2);
    C = C2 - C1;
    if(C % CLK_TCK >= 50)    C += CLK_TCK;
    C /= CLK_TCK;
    ss = C % 60;
    C /= 60;
    mm = C % 60;
    hh = C / 60;
    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#define CLK_TCK 100

struct Time{
    int hh;
    int mm;
    int ss;
};

void print(struct Time C);

struct Time timing();

int main (void)
{
    using namespace std;

    struct Time C;

    C = timing();
    print(C);

    return 0;
}

void print(struct Time C)
{
    using namespace std;

    cout << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << C.hh
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << C.mm
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << C.ss
         << endl;
}

struct Time timing()
{
    using namespace std;

    int C1, C2, C;
    struct Time clock;

    cin >> C1
        >> C2;
    C = C2 - C1;
    if(C % CLK_TCK >= 50)    C += 100;
    C /= CLK_TCK;
    clock.ss = C % 60;
    C /= 60;
    clock.mm = C % 60;
    clock.hh = C / 60;

    return clock;
}

```
