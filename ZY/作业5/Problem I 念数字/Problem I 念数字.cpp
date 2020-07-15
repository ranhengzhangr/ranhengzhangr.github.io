#include <iostream>

#include <cstring>

#include <string>

int main (void)
{
    using namespace std;

    int i, len;
    string str;

    getline(cin, str);
    for(i = 0; i < str.size(); i++)
    {
        if(i > 0)    cout << " ";
        switch(str[i])
        {
            case '-': cout << "fu"; break;
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

    return 0;
}
