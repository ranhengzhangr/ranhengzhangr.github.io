#include <iostream>

#include <iomanip>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, h, m, s;
    string str;

    while(getline(cin, str)&&str != "END")
    {
        h = (str[7] - 48) * 10 + (str[8] - 48);
        m = (str[9] - 48) * 10 + (str[10] - 48);
        s = (str[11] - 48) * 10 + (str[12] - 48);
        h += 8;
        if(h > 23)    h -= 24;
        if(h < 0)    h += 24;
        cout << noshowpos
             << setw(2)
             << setfill('0')
             << right
             << h
             << ":"
             << noshowpos
             << setw(2)
             << setfill('0')
             << right
             << m
             << ":"
             << noshowpos
             << setw(2)
             << setfill('0')
             << right
             << s
             << endl;
    }

    return 0;
}
