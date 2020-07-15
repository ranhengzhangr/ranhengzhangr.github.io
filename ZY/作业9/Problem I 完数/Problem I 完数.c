#include <stdio.h>

#include <math.h>

int perfect_number(int n);

int main (void)
{
    int i, m, n, u, flag;

    scanf("%d %d", &n, &m);
    for(i = n, u = 0; i <= m; i++)
    {
        if(i > 1){
            flag = perfect_number(i);
            if(flag == 1){
                if(u > 0){
                    printf(" ");
                }
                printf("%d", i);
                u++;
                flag = 0;
            }
        }
    }
    if(u == 0){
        printf("NIL");
    }
    printf("\n");

    return 0;
}

int perfect_number(int n)
{
    int i, t, sum;

    t = sqrt(n);
    for(i = 2, sum = 1; i <= t; i++)
    {
        if(n % i == 0){
            sum += i;
            if(n / i != i){
                sum += n / i;
            }
        }
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}
