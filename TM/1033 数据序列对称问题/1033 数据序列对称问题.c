#include <stdio.h>

int main (void)
{
    int i, k, n, t, sum;

    scanf("%d", &n);
    for(k = 0; k < n; k++)
    {
        scanf("%d", &t);
        int A[t];

        for(i = 0; i < t; i++)
        {
            scanf("%d", &A[i]);
        }
        sum = 0;
        for(i = 0; i < n / 2; i++)
        {
            if(A[i] == A[t - i - 1])    sum++;
        }
        if(sum == n / 2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
