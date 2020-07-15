#include <stdio.h>

#include <math.h>

int judge(int s);

int main (void)
{
    int i, m, n, t, sum = 0, add = 0, mote;

    scanf("%d %d", &m, &n);
    if(m > n){
        mote = m, m = n, n = mote;
    }
    if(n <= 500&&m >= 1){
        for(i = m; i <= n; i++)
        {
            if(i == 1){
                i++;
            }
            t = judge(i);
            if(t == 1){
                sum += i;
                add++;
            }
        }
        printf("%d %d\n", add, sum);
    }
    else{
        ;
    }

    return 0;
}

int judge(int s)
{
    int i, r;

    r = sqrt(s);
    for(i = 2; i <= r; i++)
    {
        if(s % i == 0){
            return 0;
        }
    }

    return 1;
}
