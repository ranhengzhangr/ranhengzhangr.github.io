#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int a, b, t, num, sum, flag;

    scanf("%d %d", &a, &b);
    t = 1;
    num = 0;
    while(num < a)
    {
        t++;
        flag = judge(t);
        if(flag == 0){
            num++;
        }
    }
    sum = t;
    while(num < b)
    {
        t++;
        flag = judge(t);
        if(flag == 0){
            sum += t;
            num++;
        }
    }
    printf("%d\n", sum);

    return 0;
}

int judge(int n)
{
    int i, t, flag;

    flag = 0;
    if(n > 2){
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0){
                flag = 1;
            }
        }
    }

    return flag;
}
