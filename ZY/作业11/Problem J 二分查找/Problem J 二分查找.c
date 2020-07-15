#include <stdio.h>

int main (void)
{
    int a, b, c, i, t, put, nnum, nput, flag;

    scanf("%d", &nnum);
    int num[nnum];

    for(i = 0; i < nnum; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &nput);
    for(i = 0; i < nput; i++)
    {
        scanf("%d", &put);
        if(put < num[0]||put > num[nnum - 1]){
            printf("Not found!\n");
        }
        else{
            a = 1;
            b = nnum;
            flag = 0;
            while(a <= b&&flag == 0)
            {
                t = (a + b) / 2;
                if(num[t - 1] == put){
                    flag = 1;
                }
                else{
                    if(num[t - 1] < put){
                        a = t + 1;
                    }
                    else{
                        b = t - 1;
                    }
                }
            }
            if(flag == 0){
                printf("Not found!\n");
            }
            else{
                printf("%d\n", t - 1);
            }
        }
    }

    return 0;
}
