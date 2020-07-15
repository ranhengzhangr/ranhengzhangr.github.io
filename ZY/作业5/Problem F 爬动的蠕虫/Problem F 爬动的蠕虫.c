#include <stdio.h>

int main (void)
{
    int d, t = 0, n, u;

    scanf("%d %d %d", &n, &u, &d);
    if(d < u&&n <= 100){
        while(n > 0)
        {
            if(t % 2 == 0){
                n -= u;
                t++;
            }
            else{
                n += d;
                t++;
            }
        }
        printf("%d", t);
    }
    else{
        ;
    }

    return 0;
}
