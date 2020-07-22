```c
//GCC

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

```

```c++
//G++

#include <iostream>

#include <cstring>

void reserve(char str[])
{
    using namespace std;

    int i, l = strlen(str);
    char ch;

    for(i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = ch;
    }
}

void cutfix(char str[])
{
    using namespace std;

    reserve(str);

    int i;

    for(i = strlen(str) - 1; i > 0; i--)
    {
        if(str[i] != '0'){
            str[i + 1] = '\0';
            break;
        }
    }
    reserve(str);
}

void addfix(int n, char XR[], const char MX[])
{
    using namespace std;

    int i;

    strcpy(XR, MX);
    for(i = 0; i < n; i++)
    {
        strcat(XR, "0");
    }
}

void moddiv(const char XR[], const char GX[], char RX[])
{
    using namespace std;

    int m, n;
    char str[133];

    strcpy(str, XR);
    for(m = 0; ; m++)
    {
        while(str[m] == '0'&&m <= strlen(str) - strlen(GX))    m++;
        if(m > strlen(str) - strlen(GX))    break;
        for(n = 0; n < strlen(GX); n++)
        {
            if(str[m + n] == GX[n])    str[m + n] = '0';
            else    str[m + n] = '1';
        }
    }
    reserve(str);
    str[strlen(GX) - 1] = '\0';
    reserve(str);
    strcpy(RX, str);
}

char *modsub(const char XR[], const char RX[])
{
    using namespace std;

    int i;
    char *TX = (char *)malloc(133 * sizeof(char));

    strcpy(TX, XR);
    for(i = 0; i < strlen(RX); i++)
    {
        if(TX[strlen(TX) - i - 1] == RX[strlen(RX) - i - 1])    TX[strlen(TX) - i - 1] = '0';
        else    TX[strlen(TX) - i - 1] = '1';
    }

    return TX;
}

int main (void)
{
    using namespace std;

    char RX[33], GX[33], MX[101], XR[133];

    cin >> MX
        >> GX;
    addfix(strlen(GX) - 1, XR, MX);
    moddiv(XR, GX, RX);
    cout << modsub(XR, RX)
         << endl;

    return 0;
}

```
