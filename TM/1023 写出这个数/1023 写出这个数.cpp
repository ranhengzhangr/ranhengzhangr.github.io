#include <iostream>

#include <cstring>

#include <cctype>

void read(char str[]);

void revers(char str[]);

void tostr(int n, char str[]);

int addup();

int main (void)
{
    using namespace std;

    int sum;
    char str[4];

    sum = addup();
    tostr(sum, str);
    revers(str);
    read(str);

    return 0;
}

void read(char str[])
{
    using namespace std;

    int i;

    for(i = 0; i < strlen(str); i++)
    {
        if(i > 0)    cout << " ";
        switch(str[i])
        {
            case '0': cout << "ling"; break;
            case '1': cout << "yi"; break;
            case '2': cout << "er"; break;
            case '3': cout << "san"; break;
            case '4': cout << "si"; break;
            case '5': cout << "wu"; break;
            case '6': cout << "liu"; break;
            case '7': cout << "qi"; break;
            case '8': cout << "ba"; break;
            case '9': cout << "jiu"; break;
        }
    }
    cout << endl;
}

void revers(char str[])
{
    using namespace std;

    int i;
    char ch;

    for(i = 0; i < strlen(str) / 2; i++)
    {
        ch = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = ch;
    }
}

void tostr(int n, char str[])
{
    using namespace std;

    int i;

    i = 0;
    while(n > 0||i == 0)
    {
        str[i] = n % 10 + 48;
        n /= 10;
        i++;
    }
    str[i] = '\0';
}

int addup()
{
    using namespace std;

    int n;
    char ch;

    n = 0;
    while(isdigit(ch = cin.get()))
    {
        n += ch - 48;
    }

    return n;
}
