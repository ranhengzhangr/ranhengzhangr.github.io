#include <stdio.h>

#include <string.h>

int cti(char ch);

char itc(int n);

int main (void)
{
    int a, b, c, i, u, len, len1, len2;
    char ch1[1001], ch2[1001], ch3[1001], fose;

    scanf("%s", ch1);
    scanf("%s", ch2);
    len1 = strlen(ch1);
    len2 = strlen(ch2);
    strcpy(ch3, ch1);
    for(i = 0; i < len1; i++)
    {
        ch1[i] = ch3[len1 - i - 1];
    }
    strcpy(ch3, ch2);
    for(i = 0; i < len2; i++)
    {
        ch2[i] = ch3[len2 - i - 1];
    }
    if(len1 != len2){
        if(len1 > len2){
            for(i = len2; i < len1; i++)
            {
                ch2[i] = '0';
            }
            len = len1;
        }
        else{
            for(i = len1; i < len2; i++)
            {
                ch1[i] = '0';
            }
            len = len2;
        }
    }
    else{
        len = len1;
    }
    for(i = 0, u = 0; i < len; i++)
    {
        a = cti(ch1[i]);
        b = cti(ch2[i]);
        c = a + b + u;
        if(c > 9){
            u = c / 10;
            c %= 10;
        }
        else{
            u = 0;
        }
        ch3[i] = itc(c);
    }
    if(u > 0){
        ch3[len] = itc(u);
        len++;
    }
    for(i = 0; i < len; i++)
    {
        putchar(ch3[len - i - 1]);
    }

    return 0;
}

int cti(char ch)
{
    switch(ch)
    {
        case '0':return 0;break;
        case '1':return 1;break;
        case '2':return 2;break;
        case '3':return 3;break;
        case '4':return 4;break;
        case '5':return 5;break;
        case '6':return 6;break;
        case '7':return 7;break;
        case '8':return 8;break;
        case '9':return 9;break;
    }
}

char itc(int n)
{
    switch(n)
    {
        case 0: return '0';break;
        case 1: return '1';break;
        case 2: return '2';break;
        case 3: return '3';break;
        case 4: return '4';break;
        case 5: return '5';break;
        case 6: return '6';break;
        case 7: return '7';break;
        case 8: return '8';break;
        case 9: return '9';break;
    }
}
