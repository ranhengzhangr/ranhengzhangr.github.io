#include <iostream>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main (void)
{
    using namespace std;

    struct complex product, x, y;

    cin >> x.real
        >> x.imag
        >> y.real
        >> y.imag;
    product = multiply(x, y);
    cout << "("
         << x.real
         << "+"
         << x.imag
         << "i) * ("
         << y.real
         << "+"
         << y.imag
         << "i) = "
         << product.real
         << " + "
         << product.imag
         << "i"
         << endl;

    return 0;
}

struct complex multiply(struct complex x, struct complex y)
{
    using namespace std;

    struct complex product;

    product.real = x.real * y.real - x.imag * y.imag;
    product.imag = x.real * y.imag + y.real * x.imag;

    return product;
};
