#include <stdio.h>

int main (void)
{
    int A[10], i, n, t, k, sum;

    sum = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    for(i = 0; i < sum; i++)
    {
        if(i == 0){
            k = 1;
        }
        else{
            k = 0;
        }
        for(; k < 10; k++)
        {
            if(A[k] != 0){
                A[k]--;
                t = k;
                break;
            }
        }
        printf("%d", t);
    }
    printf("\n");

    return 0;
}
