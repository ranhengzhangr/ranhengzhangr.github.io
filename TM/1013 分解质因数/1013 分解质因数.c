#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int i, n, k, fure, mote, flag;

    scanf("%d", &n);
    printf("%d=", n);
    k = 0;
    while(n > 1)
    {
        i = 1;
        flag = 0;
        while(flag == 0)
        {
            i++;
            mote = judge(i);
            if(mote == 0){
                fure = n % i;
                if(fure == 0){
                    flag = 1;
                }
            }
        }
        if(k > 0){
            printf("*");
        }
        printf("%d", i);
        k++;
        n /= i;
    }

    return 0;
}

int judge(int n)
{
    int i, t, k, flag;

    if(n < 2){
        flag = 1;
    }
    else{
        flag = 0;
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0){
                if(n % i == 0){
                    flag = 1;
                }
            }
        }
    }

    return flag;
}
