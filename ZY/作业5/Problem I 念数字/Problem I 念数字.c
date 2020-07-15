#include <stdio.h>

int main (void)
{
    int a[18], i = 0, u;
    long long int n;

    scanf("%lld", &n);
    if(n < 0){
        printf("fu ");
        n = -n;
    }
    while(n / 10 != 0)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    a[i] = n;
    u = i;
    for(; i >= 0; i--)
    {
        if(i < u){
            printf(" ");
        }
        switch(a[i])
        {
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
        }
    }

    return 0;
}
