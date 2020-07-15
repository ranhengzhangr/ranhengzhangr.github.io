#include <stdio.h>

int main (void)
{
    int n;

    scanf("%d", &n);

    int num[n][n], x, y, sum = 0;
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            scanf("%d", &num[x][y]);
            if(x != n - y - 1&&x != n - 1&&y != n - 1){
                sum += num[x][y];
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}
