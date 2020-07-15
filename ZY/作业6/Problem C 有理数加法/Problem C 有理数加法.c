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
