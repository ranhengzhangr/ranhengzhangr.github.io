#include <stdio.h>

int main (void)
{
    int i, n;

    scanf("%d", &n);
    int a[1000], t = 1, r = n;

    for(i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    for(i = 0; r > 1; i++)
    {
        if(a[i] != 0){
            if(t == 3){
                a[i] = 0;
                t = 0;
                r--;
            }
            t++;
        }
        if(i == n - 1){
            i = -1;
        }
    }
    i = 0;
    while(a[i] == 0)
    {
        i++;
    }
    printf("%d", i + 1);

    return 0;
}
