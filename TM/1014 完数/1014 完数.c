#include <stdio.h>

#include <math.h>

int judge(int n);

int main (void)
{
    int i, a, b, sum = 0;

    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        if(judge(i) == 1){
            if(sum > 0){
                printf(" ");
            }
            printf("%d", i);
            sum++;
        }
    }
    if(sum == 0){
        printf("NIL");
    }
    printf("\n");

    return 0;
}

int judge(int n)
{
    int i, sum, flag;

    if(n < 6){
        flag = 0;
    }
    else{
        sum = 1;
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0){
                sum += i + n / i;
            }
        }
        if(sum == n){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }

    return flag;
}
