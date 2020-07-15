#include <iostream>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, k;
    char ch;
    string str;

    cin.get(ch);
    cin.get();
    cin >> str;
    for(i = 0; i < str.size(); i++)
    {
        if(str[i] == ch)    k = i;
    }
    cout << "index = "
         << k
         << endl;

    return 0;
}
