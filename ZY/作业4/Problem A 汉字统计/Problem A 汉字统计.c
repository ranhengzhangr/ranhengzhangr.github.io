#include <stdio.h>

int main (void)
{
    int n, i, l, t, sum;
    char ch;

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        sum = 0;
        while((ch = getchar()) != '\n')
        {
            if(ch < 0){
                sum++;
            }
        }
        printf("%d\n", sum / 3);
    }

    return 0;
}
