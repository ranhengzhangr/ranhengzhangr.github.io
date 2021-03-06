#include <stdio.h>

int line(char p, char q, int x1, int y1, int x2, int y2);

int main (void)
{
    int i, i1, i2, n, k, u, t, x1, x2, y1, y2, flag;

    scanf("%d", &n);
    if(n < 5){
        n *= 2;
        t = n * n;
        char link[n][n];

        for(i1 = 0; i1 < n; i1++)
        {
            for(i2 = 0; i2 < n; i2++)
            {
                getchar();
                link[i1][i2] = getchar();
            }
        }
        scanf("%d", &k);
        u = 0;
        for(i = 0; i < k&&u < 3&&t > 0; i++)
        {
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            x1 -= 1, x2 -= 1, y1 -= 1, y2 -= 1;
            flag = line(link[x1][y1], link[x2][y2], x1, y1, x2, y2);
            if(flag == 1){
                link[x1][y1] = '*';
                link[x2][y2] = '*';
                t -= 2;
                for(i1 = 0; i1 < n&&t > 0; i1++)
                {
                    for(i2 = 0; i2 < n; i2++)
                    {
                        if(i2 > 0){
                            printf(" ");
                        }
                        putchar(link[i1][i2]);
                        if(i2 == n - 1){
                            printf("\n");
                        }
                    }
                }
            }
            else{
                u++;
                printf("Uh-oh\n");
            }
        }
        if(u == 3){
            printf("Game Over\n");
        }
        if(t == 0){
            printf("Congratulations!\n");
        }
    }

    return 0;
}

int line(char p, char q, int x1, int y1, int x2, int y2)
{
    if(p == q&&p != '*'&&q != '*'){
        return 1;
    }
    else{
        return 0;
    }
}
