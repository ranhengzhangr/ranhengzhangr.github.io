#include <stdio.h>

int main (void)
{
    int a, i, m, n, t, x, y, z;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (100 <= m <= n <= 999){
            t = 0;
            for (i = m;i <= n;i++)
            {
                x = i / 100;
                m = i % 100;
                y = m / 10;
                z = m % 10;
                a = x * x * x + y * y * y + z * z * z;
                if (i == a){
                    while (t > 0)
                    {
                        printf(" ");
                        break;
                    }
                    t++;
                    printf("%d", i);
                }
                else{
                    continue;
                }
            }
            while (t == 0)
            {
                printf("no");
                break;
            }
            printf("\n");
        }
    }

    return 0;
}
