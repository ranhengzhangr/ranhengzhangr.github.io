#include <stdio.h>

int main (void)
{
    int n, fen1, fen2, fen5, total, count = 0;

    scanf("%d", &n);
    for(fen5 = n / 5;fen5 > 0; fen5--)
    {
        for(fen2 = (n - fen5 * 5) / 2; fen2 > 0; fen2 --)
        {
            fen1 = (n - fen5 * 5 - fen2 * 2);
            if(fen1 > 0){
                total = fen1 + fen2 + fen5;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
                count++;
            }
        }
    }
    printf("count = %d\n", count);

    return 0;
}
