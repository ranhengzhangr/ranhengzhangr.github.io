#include <stdio.h>

int main (void)
{
    int i, n, sum;

    scanf("%d", &n);
    sum = 0;
    for(i = 1; i <= n; i++)
    {
        if(i % 4 == 1&&i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
