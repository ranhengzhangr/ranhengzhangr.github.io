#include <iostream>

#include <cctype>

int main (void)
{
    using namespace std;

    int sum;
    char ch;

    sum = 0;
    while((ch = cin.get()) != '\n')
    {
        switch(tolower(ch))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': sum++; break;
            default : break;
        }
    }
    cout << sum
         << endl;

    return 0;
}
