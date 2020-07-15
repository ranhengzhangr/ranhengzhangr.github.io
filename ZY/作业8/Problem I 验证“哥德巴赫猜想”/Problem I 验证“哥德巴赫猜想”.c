#include <stdio.h>

#include <math.h>

int prime_judge(int n);

int main (void)
{
    int i, n, t, o, u, flag;

    scanf("%d", &n);
    u = 0;
    for(i = 2; i < (n + 1) / 2&&u == 0; i++)
    {
        flag = prime_judge(i);
        if(flag == 0){
            o = n - i;
            flag = prime_judge(o);
            if(flag == 0){
                printf("%d = %d + %d\n", n, i, o);
                u = 1;
            }
        }
    }

    return 0;
}

int prime_judge(int n)
{
    int i, t, u = 0;

    t = sqrt(n);
    for(i = 2; i < t; i++)
    {
        if(n % i == 0){
            u++;
            return 1;
        }
    }
    if(u == 0){
        return 0;
    }
}
