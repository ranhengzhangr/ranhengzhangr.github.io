#include <iostream>

#include <cstring>

void moddiv(char xrMx[], char Gx[], char Rx[]);

void modsub(char xrMx[], char Rx[], char Tx[]);

int main (void)
{
    using namespace std;

    int i, R;
    char ch[2] = {'0', '\0'}, Mx[133], Rx[33], Gx[33], Tx[133], xrMx[133];

    cin >> Mx
        >> Gx;
    strcpy(xrMx, Mx);
    for(i = 0; i < strlen(Gx) - 1; i++)
    {
        strcat(xrMx, ch);
    }
    moddiv(xrMx, Gx, Rx);
    modsub(xrMx, Rx, Tx);
    cout << Tx
         << endl;

    return 0;
}
void moddiv(char xrMx[], char Gx[], char Rx[])
{
    using namespace std;

    int i, k;
    char ch;

    strcpy(Rx, xrMx);
    for(i = 0; i < strlen(Rx) - strlen(Gx) + 1; i++)
    {
        if(Rx[i] != '0'){
            for(k = 0; k < strlen(Gx); k++)
            {
                Rx[i + k] = (Rx[i + k] - 48 + Gx[k] - 48) % 2 + 48;
            }
        }
    }
    for(i = 0; i < strlen(Rx) / 2; i++)
    {
        ch = Rx[i];
        Rx[i] = Rx[strlen(Rx) - i - 1];
        Rx[strlen(Rx) - i - 1] = ch;
    }
    i = strlen(Rx) - 1;
    while(Rx[i] == '0'&&i > 0)
    {
        Rx[i] = '\0';
        i--;
    }
}

void modsub(char xrMx[], char Rx[], char Tx[])
{
    using namespace std;

    int i;

    strcpy(Tx, xrMx);
    for(i = 0; i < strlen(Rx); i++)
    {
        Tx[strlen(Tx) - i - 1] = (Tx[strlen(Tx) - i - 1] - 48 + Rx[i] - 48) % 2 + 48;
    }
}
