#include <iostream>

void read(const char ch);

int main (void)
{
    using namespace std;

    int i;
    char ch;

    i = 0;
    while((ch = cin.get()) != '\n')
    {
        if(i > 0)    cout << " ";
        read(ch);
        i++;
    }

    return 0;
}

void read(const char ch)
{
    using namespace std;

    switch(ch)
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
