#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main (void)
{
    struct complex x, y, z;

    scanf("%d %d %d %d", &x.real, &x.imag, &y.real, &y.imag);
    z = multiply(x, y);
    printf("(%d+%di)*(%d+%di)=%d+%di\n", x.real, x.imag, y.real, y.imag, z.real, z.imag);

    return 0;
}

struct complex multiply(struct complex x, struct complex y)
{
    struct complex z;

    z.real = x.real * y.real - x.imag * y.imag;
    z.imag = x.real * y.imag + x.imag * y.real;

    return z;
}
