#include <stdio.h>

int main (void)
{
    int A[20], i, t, k, sum;

    sum = 0;
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &t);
        for(k = 0; k < sum; k++)
        {
            if(A[k] == t)    break;
        }
        if(k == sum){
            A[sum] = t;
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}
