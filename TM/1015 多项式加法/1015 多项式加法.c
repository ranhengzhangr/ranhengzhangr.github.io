#include <stdio.h>

int main (void)
{
    int th[100] = {0}, i, n, exp, max = 0, flag;

    flag = 0;
    while(flag != 2)
    {
        scanf("%d", &exp);
        scanf("%d", &n);
        if(exp == 0){
            flag ++;
        }
        if(exp > max){
            max = exp;
        }
        th[exp] += n;
    }
    for(i = max; i > 0; i--)
    {
        if(th[i] != 0){
            printf("%dx", th[i]);
            if(i > 1){
                printf("%d", i);
            }
            printf("+");
        }
    }
    printf("%d\n", th[0]);
}
