#include <iostream>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, k;
    char ch[2] = "0", cha[1001], chb[1001], chc[1001], mote;

    cin.getline(cha, 1001);
    cin.getline(chb, 1001);
    for(i = 0; i < strlen(cha) / 2; i++)
    {
        mote = cha[i];
        cha[i] = cha[strlen(cha) - i - 1];
        cha[strlen(cha) - i - 1] = mote;
    }
    for(i = 0; i < strlen(chb) / 2; i++)
    {
        mote = chb[i];
        chb[i] = chb[strlen(chb) - i - 1];
        chb[strlen(chb) - i - 1] = mote;
    }
    if(strlen(cha) < strlen(chb)){
        strcpy(chc, cha);
        strcpy(cha, chb);
        strcpy(chb, chc);
    }
    for(i = 0; i < strlen(cha) - strlen(chb); i++)
    {
        strcat(chb, ch);
    }
    k = 0;
    for(i = 0; i < strlen(cha); i++)
    {
        chc[i] = (cha[i] - 48 + chb[i]- 48 + k) % 10 + 48;
        k = (cha[i] - 48 + chb[i] - 48 + k) / 10;
    }
    if(k != 0){
        chc[i] = k + 48;
        i++;
        chc[i] = '\0';
    }
    for(i = 0; i < strlen(chc) / 2; i++)
    {
        mote = chc[i];
        chc[i] = chc[strlen(chc) - i - 1];
        chc[strlen(chc) - i - 1] = mote;
    }
    cout << chc
         << endl;

    return 0;
}
