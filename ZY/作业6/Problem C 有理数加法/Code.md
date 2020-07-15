```c
//GCC

#include <stdio.h>

int main (void)
{
    int a, b, p, q, r, t, x, y, mote;

    scanf("%d/%d %d/%d", &a, &b, &p, &q);
    if(b > q){
        t = b;
        r = q;
    }
    else{
        t = q;
        r = b;
    }
    y = t;
    while(y % r != 0)
    {
        y += t;
    }
    r = y / r;
    t = y / t;
    x = a * r + p * t;
    if(x > y){
        r = x;
        t = y;
    }
    else{
        r = y;
        t = x;
    }
    while(r % t != 0)
    {
        r %= t;
        if(r == 0){
            break;
        }
        if(r < t){
            mote = r, r = t, t = mote;
        }
    }
    x /= t;
    y /= t;
    if(y == 1){
        printf("%d", x);
    }
    else{
        printf("%d/%d", x, y);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

struct complex{
    int upper;
    int lower;
};

struct complex reduce(struct complex x, struct complex y);

int main (void)
{
    using namespace std;

    struct complex product, x, y;

    cin >> x.upper;
    cin.get();
    cin >> x.lower;
    cin >> y.upper;
    cin.get();
    cin >> y.lower;
    product = reduce(x, y);
    cout << product.upper
         << "/"
         << product.lower
         << endl;

    return 0;
}

struct complex reduce(struct complex x, struct complex y)
{
    using namespace std;

    int a, b, t;
    struct complex product;

    product.upper = x.upper * y.lower + x.lower * y.upper;
    product.lower = x.lower * y.lower;
    if(product.upper > product.lower){
        a = product.upper;
        b = product.lower;
    }
    else{
        a = product.lower;
        b = product.upper;
    }
    while(b > 0)
    {
        a %= b;
        if(a < b){
            t = a, a = b, b = t;
        }
        t = a;
    }
    product.upper /= t;
    product.lower /= t;

    return product;
};

```
