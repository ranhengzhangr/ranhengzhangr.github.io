#include <stdio.h>

#include <stdbool.h>

#include <math.h>

bool judger(const int t);

int main (void)
{
    int n;

    for(; ; )
    {
        scanf("%d", &n);
        if(n == -1)    break;
        if(judger(n))    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}

bool judger(const int t)
{
    if(t < 2)    return false;

    int i;

    for(i = 2; i <= sqrt(t); i++)
    {
        if(t % i == 0)    return false;
    }

    return true;
}
