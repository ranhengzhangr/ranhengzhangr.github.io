#include <stdio.h>

#include <math.h>

int prime_judge(int n);

int main (void)
{
    int i, n, u, flag;

    scanf("%d", &n);
    printf("%d=", n);
    for(i = 2, flag = 1, u = 0; i <= n&&flag == 1; i++)
    {
        if(n % i == 0){
            flag = prime_judge(i);
            if(flag == 0){
                if(u != 0){
                    printf("*");
                }
                printf("%d", i);
                n /= i;
                u = 1;
                flag = 1;
                i = 1;
            }
        }
    }
    printf("\n");

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
