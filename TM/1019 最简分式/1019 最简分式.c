#include <stdio.h>

int main (void)
{
    int a, b, c, x, y;

    scanf("%d/%d", &a, &b);
    x = a, y = b;
    if(a < b){
        c = a, a = b, b = c;
    }
    while(b != 0)
    {
        a %= b;
        if(a < b){
            c = a, a = b, b = c;
        }
        c = a;
    }
    x /= c, y/= c;
    printf("%d/%d\n", x, y);

    return 0;
}
