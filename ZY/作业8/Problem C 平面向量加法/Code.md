```c
//GCC

#include <stdio.h>

struct complex
{
    float x;
    float y;
};

struct complex multiply(struct complex d1, struct complex d2);

int main (void)
{
    struct complex add, d1, d2;

    scanf("%f %f %f %f", &d1.x, &d1.y, &d2.x, &d2.y);
    add = multiply(d1, d2);
    printf("(%.1f, %.1f)\n", add.x, add.y);

    return 0;
}

struct complex multiply(struct complex d1, struct complex d2)
{
    struct complex add;

    add.x = d1.x + d2.x;
    add.y = d1.y + d2.y;

    return add;
};

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    struct coordinate{
        float x;
        float y;
    }V[3];
    int i;

    for(i = 0; i < 2; i++)
    {
        cin >> V[i].x
            >> V[i].y;
    }
    V[2].x = V[0].x + V[1].x;
    V[2].y = V[0].y + V[1].y;
    cout << "("
         << fixed
         << setprecision(1)
         << V[2].x
         << ", "
         << fixed
         << setprecision(1)
         << V[2].y
         << ")"
         << endl;

    return 0;
}

```
