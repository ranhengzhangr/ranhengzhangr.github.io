#include <stdio.h>

int main(void)
{
    int a, b, c, n, x, y;

    scanf("%d", &n);
    a = n / 100;
    n = n % 100;
    b = n / 10;
    c = n % 10;
    x=b * 10 + a;
    y=c * 100 + b * 10 + a;
    if (b = 0, c = 0){
        printf("%d", a);
    }
    else if (c = 0){
        printf("%d", x);
    }
    else{
        printf("%d", y);
    }

    return 0;
}
