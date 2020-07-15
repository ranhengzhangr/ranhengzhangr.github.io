#include <stdio.h>

int main (void)
{
    int i, m, n, x, y, r;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m > n){
            r = m;
            m = n;
            n = r;
        }
        x = 0, y = 0;
        for (i = m;i <= n;i++){
            if (i % 2 == 0){
                x = x + i * i;
            }
            else{
                y = y + i * i * i;
            }
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}
