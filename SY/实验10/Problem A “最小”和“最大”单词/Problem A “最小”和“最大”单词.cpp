#include <iostream>

#include <cstring>

#include <cctype>

int compar(const char cha[], const char chb[]);

int main (void)
{
    using namespace std;

    char ch[81], mix[81], man[81];

    mix[0] = 123;
    mix[1] = '\0';
    man[0] = 96;
    man[1] = '\0';
    while(cin >> ch&&strlen(ch) != 4)
    {
        if(compar(ch, mix) < 0)    strcpy(mix, ch);
        if(compar(ch, man) > 0)    strcpy(man, ch);
    }
    if(compar(ch, mix) < 0)    strcpy(mix, ch);
    if(compar(ch, man) > 0)    strcpy(man, ch);
    cout << mix
         << endl
         << man
         << endl;
}

int compar(const char cha[], const char chb[])
{
    using namespace std;

    int i;
    char cha_t[81], chb_t[81];

    for(i = 0; i < strlen(cha); i++)
    {
        cha_t[i] = tolower(cha[i]);
    }
    cha_t[i] = '\0';
    for(i = 0; i < strlen(chb); i++)
    {
        chb_t[i] = tolower(chb[i]);
    }
    chb_t[i] = '\0';

    return strcmp(cha_t, chb_t);
}
