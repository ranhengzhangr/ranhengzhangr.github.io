#include <iostream>

#include <string>

int main (void)
{
    using namespace std;

    int i, a, b;
    string str[5], mote;

    for(i = 0; i < 5; i++)
    {
        cin >> str[i];
    }
    for(a = 0; a < 4; a++)
    {
        for(b = a + 1; b < 5; b++)
        {
            if(str[a] > str[b]){
                mote = str[a];
                str[a] = str[b];
                str[b] = mote;
            }
        }
    }
    cout << "After sorted:"
         << endl;
    for(i = 0; i < 5; i++)
    {
        cout << str[i]
             << endl;
    }

    return 0;
}
