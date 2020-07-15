#include <iostream>

#include <cstring>

#include <string>

int main (void)
{
    using namespace std;

    int i, k;
    string str;

    while(cin >> str)
    {
        k = 0;
        for(i = 0; i < str.size(); i++)
        {
            if(str[i] > str[k])    k = i;
        }
        for(i = 0; i < str.size(); i++)
        {
            cout << str[i];
            if(str[i] == str[k])    cout << "(max)";
        }
        cout << endl;
    }

    return 0;
}
