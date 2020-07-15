#include <stdio.h>

int main (void)
{
    int n, odd, even;
    for(scanf("%d", &n), odd = 0, even = 0;n != -1; scanf("%d", &n))
    {
        if(n % 2 == 1){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("%d %d\n", odd, even);

    return 0;
}
