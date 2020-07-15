#include <iostream>

#include <cstring>

void revers(char *k, int len);

int main (void)
{
    using namespace std;

    int len;
    char ch[81];

    cin.getline(ch, 81, '\n');
    len = strlen(ch);
    revers(&ch[len - 1], len);

    return 0;
}

void revers(char *k, int len)
{
    using namespace std;

    int i;

    for(i = 0; i < len; i++)
    {
        cout << *k;
        k--;
    }
    cout << endl;
}
