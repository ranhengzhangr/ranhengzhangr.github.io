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
