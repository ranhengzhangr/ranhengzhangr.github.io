#include <iostream>

#include <cstring>

#include <cctype>

bool jude(char *cha, char *chb, int len);

int main (void)
{
    using namespace std;

    int i;
    char ch[81], ar;

    i = 0;
    while((ar = cin.get()) != '\n')
    {
        if(isalnum(ar)){
            ch[i] = tolower(ar);
            i++;
        }
    }
    ch[i] = '\0';
    if(jude(&ch[0], &ch[i - 1], i))    cout << "Palindrome";
    else    cout << "Not a palindrome";
    cout << endl;

    return 0;
}

bool jude(char *cha, char *chb, int len)
{
    using namespace std;

    int i;

    for(i = 0; i < len / 2; i++, cha++, chb--)
    {
        if(*cha != *chb)    return false;
    }

    return true;
}
