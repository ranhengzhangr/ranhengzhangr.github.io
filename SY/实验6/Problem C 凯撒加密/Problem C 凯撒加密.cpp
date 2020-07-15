#include <iostream>

#include <string>

#include <cstring>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, n;
    char ar, ch[100];

    gets(ch);
    cin >> n;
    for(i = 0; i < strlen(ch); i++)
    {
        if(isalpha(ch[i])){
            ar = ch[i] + n;
            if(islower(ch[i])){
                if(!(islower(ar)))
                    ch[i] = ar - 26;
                else
                    ch[i] = ar;
            }
            if(isupper(ch[i])){
                if(!(isupper(ar)))
                    ch[i] = ar - 26;
                else
                    ch[i] = ar;
            }

        }
    }
    cout << ch
         << endl;

    return 0;
}
