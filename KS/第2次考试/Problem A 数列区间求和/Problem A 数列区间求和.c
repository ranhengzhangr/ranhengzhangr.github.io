#include <stdio.h>

int main (void)
{
    int A[1000], i, p, q, sum = 0;

    for(i = 0; ; i++)
    {
        scanf("%d", &A[i]);
        if(A[i] == 0)    break;
    }
    scanf("%d %d", &p, &q);
    for(i = p; i <= q; i++)
    {
        sum += A[i];
    }
    printf("%d\n", sum);

    return 0;
}
