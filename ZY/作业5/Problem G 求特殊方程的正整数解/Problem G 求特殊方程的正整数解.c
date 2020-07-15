#include <stdio.h>

#include <math.h>

int main (void)
{
    int i = 0, n, t, x, y;

    scanf("%d", &n);
    if(x <= y){
        t = sqrt(n);
        for(x = 0; x < n; x++)
        {
            for(y = x + 1; y <= n; y++)
            {
                if(x * x + y * y == n){
                    printf("%d %d\n", x, y);
                    i++;
                }
            }
        }
        if(i == 0){
            printf("No Solution");
        }
    }

    return 0;
}
