#include <stdio.h>

int main (void)
{
    int i, k, n, sum;
    unsigned int IP[4], ADNR[4], WEB[4];

    scanf("%d.%d.%d.%d", &IP[0], &IP[1], &IP[2], &IP[3]);
    scanf("%d.%d.%d.%d", &ADNR[0], &ADNR[1], &ADNR[2], &ADNR[3]);
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d.%d.%d.%d", &WEB[0], &WEB[1], &WEB[2], &WEB[3]);
        sum = 0;
        for(k = 0; k < 4; k++)
        {
            if((IP[k] & ADNR[k]) == (WEB[k] & ADNR[k])){
                sum++;
            }
        }
        if(sum == 4){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
