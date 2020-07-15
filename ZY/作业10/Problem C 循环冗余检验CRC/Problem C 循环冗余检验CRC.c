#include <stdio.h>

#include <string.h>

void mod_division(int lenR, char Gx[], char xrMx[], char Qx[], char Rx[]);

void mod_subtraction(int lenR, char xrMx[], char Rx[], char Tx[]);

int char_to_int(char ch);

char int_to_char(int n);

void mod_division(int lenR, char Gx[], char xrMx[], char Qx[], char Rx[])
{
    int i, t, len;

    strcpy(Rx, xrMx);
    len = strlen(Rx);
    for(i = 0; i < len - lenR; i++)
    {
        if(Rx[i] == '0'){
            Qx[i] = '0';
        }
        else{
            Qx[i] = '1';
            for(t = 0; t <= lenR; t++)
            {
                Rx[i + t] = int_to_char((char_to_int(Rx[i + t]) + char_to_int(Gx[t])) % 2);
            }
        }
    }
}

void mod_subtraction(int lenR, char xrMx[], char Rx[], char Tx[])
{
    int i, len, lenx;

    strcpy(Tx, xrMx);
    len = strlen(xrMx);
    lenx = strlen(Rx);
    for(i = 0; i <= lenR; i++)
    {
        Tx[len - i - 1] = int_to_char((char_to_int(Tx[len - i - 1]) + char_to_int(Rx[lenx - i - 1])) % 2);
    }
    Tx[len] = '\0';
}

int char_to_int(char ch)
{
    switch(ch)
    {
        case '0':return 0;break;
        case '1':return 1;break;
    }
}

char int_to_char(int n)
{
    switch(n)
    {
        case 0:return '0';break;
        case 1:return '1';break;
    }
}

int main (void)
{
    int i, lenM, lenR;
    char Mx[101], Gx[34], Rx[134], Qx[134], Tx[134], xrMx[134], ch[2];

    scanf("%s", &Mx);
    lenM = strlen(Mx);
    scanf("%s", &Gx);
    lenR = strlen(Gx) - 1;
    strcpy(xrMx, Mx);
    for(i = lenM, ch[0] = '0', ch[1] = '\0'; i < lenM + lenR; i++)
    {
        strcat(xrMx, ch);
    }
    mod_division(lenR, Gx, xrMx, Qx, Rx);
    mod_subtraction(lenR, xrMx, Rx, Tx);
    puts(Tx);

    return 0;
}
