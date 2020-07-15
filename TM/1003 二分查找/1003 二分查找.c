#include <stdio.h>

int main (void)
{
    int a, b, i, m, n, k, t, f, flag;

    scanf("%d", &n);
    int qser[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &qser[i]);
    }
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &f);
        if(f < qser[0]||f > qser[n - 1]){
            printf("Not found!\n");
        }
        else{
            a = 0, b = n - 1, flag = 0;
            while(a <= b&&flag == 0)
            {
                t = (a + b) / 2;
                if(qser[t] == f){
                    flag = 1;
                }
                else{
                    if(qser[t] > f){
                        b = t - 1;
                    }
                    else{
                        a = t + 1;
                    }
                }
            }
            if(flag == 0){
                printf("Not found!\n");
            }
            else{
                printf("%d\n", t);
            }
        }
    }

    return 0;
}
