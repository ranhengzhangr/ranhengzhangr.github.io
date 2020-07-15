#include <iostream>

#include <cstring>

void strrve(char str[]);

int main (void)
{
    using namespace std;

    int i, n, t;
    char str[10];

    cin >> str;
    strrve(str);
    n = 0;
    t = 1;
    for(i = 0; i < strlen(str); i++)
    {
        n += (str[i] % 2 + i % 2) % 2 * t;
        t *= 2;
    }
    cout << n
         << endl;

    return 0;
}

void strrve(char str[])
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
