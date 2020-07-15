#include <stdio.h>

#include <string.h>

void put_out(char ch[]);

void put_char(char ch[], int n);

int main (void)
{
    int i, n, k, t, len;
    char ch0[57], ch1[57], ch2[57], ch3[57], ch4[57], ch5[57], ch6[57], ch7[57], ch8[57], ch9[57];

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        switch(i)
        {
            case 0:gets(ch0);break;
            case 1:gets(ch1);break;
            case 2:gets(ch2);break;
            case 3:gets(ch3);break;
            case 4:gets(ch4);break;
            case 5:gets(ch5);break;
            case 6:gets(ch6);break;
            case 7:gets(ch7);break;
            case 8:gets(ch8);break;
            case 9:gets(ch9);break;
        }
    }
    scanf("%d", &k);
    for(i = 0; i < k; i++)
    {
        scanf("%d", &t);
        if(t < n){
            switch(t)
            {
                case 0:put_out(ch0);break;
                case 1:put_out(ch1);break;
                case 2:put_out(ch2);break;
                case 3:put_out(ch3);break;
                case 4:put_out(ch4);break;
                case 5:put_out(ch5);break;
                case 6:put_out(ch6);break;
                case 7:put_out(ch7);break;
                case 8:put_out(ch8);break;
                case 9:put_out(ch9);break;
            }
        }
        else{
            printf("Not Found\n");
        }
    }

    return 0;
}

void put_out(char ch[])
{
    int len, lon[5] = {0}, i, u, t;
    char na[10], ti[10], se, ph[16], mo[16];
    len = strlen(ch);
    u = 0, t = 0;
    for(i = 0; i < len; i++)
    {
        if(ch[i] != ' '){
            switch(t)
            {
                case 0:na[u] = ch[i], lon[0]++;break;
                case 1:ti[u] = ch[i], lon[4]++;break;
                case 2:se = ch[i];break;
                case 3:ph[u] = ch[i], lon[1]++;break;
                case 4:mo[u] = ch[i], lon[2]++;break;
            }
            u++;
        }
        else{
            u = 0, t++;
        }
    }
    for(i = 0; i < 5; i++)
    {
        switch(i)
        {
            case 0:put_char(na, lon[0]);break;
            case 1:put_char(ph, lon[1]);break;
            case 2:put_char(mo, lon[2]);break;
            case 3:putchar(se);break;
            case 4:put_char(ti, lon[4]);break;
        }
        if(i < 4){
            printf(" ");
        }
    }
    printf("\n");
}

void put_char(char ch[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        putchar(ch[i]);
    }
}
