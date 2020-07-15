#include <stdio.h>

int main (void)
{
    int a[4], L, S, i;

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 1, L = a[0], S = a[0]; i < 4; i++)
    {
        if(a[i] < S){
            S = a[i];
        }
        if(a[i] > L){
            L = a[i];
        }
    }
    printf("Largest = %d, Smallest = %d", L, S);

    return 0;
}
