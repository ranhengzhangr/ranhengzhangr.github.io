#include <stdio.h>

int main (void)
{
    int i, n, t, cou = 0;
    float ave, sum = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        sum += t;
        if(t >= 60){
            cou++;
        }
    }
    ave = sum / n;
    printf("average = %.1f\ncount = %d\n", ave, cou);

    return 0;
}
