#include <stdio.h>

int main (void)
{
    long long int k, p, len;
    int i, t, u, flag;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%lld", &k);

        flag = 0;
        p = k;
        while(p > 1)
        {
            flag = 1 - flag;
            len = 0;
            while(len < p)
            {
                len = 1 + len * 2;
            }
            if(k == (len + 1) / 2){
                flag = 1 - flag;
                break;
            }
            else{
                p = len / 2;
                if(k > (len + 1) / 2){
                    k = len - k + 1;
                }
                else{
                    flag = 1 - flag;
                }
            }
        }
        printf("Case #%d: %d\n", i + 1, flag);
    }

    return 0;
}
