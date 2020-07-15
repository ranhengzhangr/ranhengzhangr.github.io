#include <stdio.h>

int main (void)
{
    int i, m, n, u = 1, sum = 0;

    scanf("%d %d", &m, &n);
    for(i = m; i < n; i++)
    {
        sum += i;
        if(i == 0){
            printf("    0");
        }
        else{
            printf("%5.d", i);
        }
        if(u % 5 == 0){
            printf("\n");
        }
        u++;
    }
    sum += n;
    printf("%5.d\n", n);
    printf("Sum = %d", sum);

    return 0;
}
