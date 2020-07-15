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
