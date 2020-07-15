#include <iostream>

#include <string>

#include <cctype>

int main (void)
{
    using namespace std;

    char ch;
    string str;

    while(cin >> ch)
    {
        ch = toupper(ch);
        getline(cin, str);
        cout << ch
             << str
             << endl;
    }

    return 0;
}
