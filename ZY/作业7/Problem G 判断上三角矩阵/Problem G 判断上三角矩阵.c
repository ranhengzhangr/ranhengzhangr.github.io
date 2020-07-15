#include <stdio.h>

int main (void)
{
    int i, n, t, x, y;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        int a[t][t], u;

        u = 0;
        for(x = 0; x < t; x++)
        {
            for(y = 0; y < t; y++)
            {
                scanf("%d", &a[x][y]);
                if(x > y){
                    if(a[x][y] != 0){
                        u = 1;
                    }
                }
            }
        }
        if(u == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;

}
