#include <stdio.h>

int main (void)
{
    int n, sum = 0;

    scanf("%d", &n);
    for(; n > 0; scanf("%d", &n))
    {
        if(n % 2 != 0){
            sum += n;
        }
    }
    printf("%d", sum);

    return 0;
}
