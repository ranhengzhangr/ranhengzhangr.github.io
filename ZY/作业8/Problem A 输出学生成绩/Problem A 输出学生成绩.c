#include <stdio.h>

int main (void)
{
    int i, n, t;
    float average, max, min, sum;

    scanf("%d\n%d", &n, &t);
    sum = t, max = t, min = t;
    for(i = 1; i < n; i++)
    {
        scanf("%d", &t);
        if(max < t){
            max = t;
        }
        if(min > t){
            min = t;
        }
        sum += t;
    }
    average = sum / n;
    printf("average = %.2f\nmax = %.2f\nmin = %.2f\n", average, max, min);

    return 0;
}
