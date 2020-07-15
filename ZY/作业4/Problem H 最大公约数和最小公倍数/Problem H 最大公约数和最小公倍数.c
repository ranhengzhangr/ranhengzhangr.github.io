#include <stdio.h>

int main (void)
{
    int m, n, x, y, max, min, mote;

    scanf("%d %d", &m, &n);
    if(m > n){
        mote = m, m = n, n = mote;
    }
    min = n, x = n, y = m;
    while(min % m != 0)
    {
        min += n;
    }
    while(m % y != 0||n % y != 0)
    {
        if(x > y){
            mote = x, x = y, y = mote;
        }
        y %= x;
    }
    max = y;
    printf("%d %d\n", max, min);

    return 0;
}
