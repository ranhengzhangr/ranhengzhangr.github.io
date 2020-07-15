#include <stdio.h>

#include <math.h>

int cti(char ch);

char itc(int n);

int main (void)
{
    int a[4], b[4], c[4], i, k;
    char cha[4][8], chb[4][8], chc[4][8];

    while(scanf("%d.%d.%d.%d %d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3], &b[0], &b[1], &b[2], &b[3]) != EOF)
    {
        for(i = 0; i < 4; i++)
        {
            for(k = 0; k < 8; k++)
            {
                cha[i][k] = itc(a[i] % 2);
                a[i] /= 2;
            }
        }
        for(i = 0; i < 4; i++)
        {
            for(k = 0; k < 8; k++)
            {
                chb[i][k] = itc(b[i] % 2);
                b[i] /= 2;
            }
        }
        for(i = 0; i < 4; i++)
        {
            for(k = 0; k < 8; k++)
            {
                if(cha[i][k] == '1'&&chb[i][k] == '1'){
                    chc[i][k] = '1';
                }
                else{
                    chc[i][k] = '0';
                }
            }
        }
        for(i = 0; i < 4; i++)
        {
            c[i] = 0;
            for(k = 0; k < 8; k++)
            {
                c[i] += cti(chc[i][k]) * pow(2, k);
            }
        }
        printf("%d.%d.%d.%d\n", c[0], c[1], c[2], c[3]);
    }

    return 0;
}

int cti(char ch)
{
    switch(ch)
    {
        case '0':return 0;break;
        case '1':return 1;break;
    }
}

char itc(int n)
{
    switch(n)
    {
        case 0:return '0';break;
        case 1:return '1';break;
    }
}
