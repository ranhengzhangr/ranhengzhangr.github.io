#include <iostream>

#include <string>

#include <cstring>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, n, k, sum_a, sum_e, sum_i, sum_o, sum_u;
    string str;

    cin >> n;
    cin.get();
    for(i = 0; i < n; i++)
    {
        sum_a = 0;
        sum_e = 0;
        sum_i = 0;
        sum_o = 0;
        sum_u = 0;
        getline(cin, str);
        for(k = 0; k < str.size(); k++)
        {
            switch(toupper(str[k]))
            {
                case 'A': sum_a++; break;
                case 'E': sum_e++; break;
                case 'I': sum_i++; break;
                case 'O': sum_o++; break;
                case 'U': sum_u++; break;
                default: break;
            }
        }
        if(i > 0)    cout << endl;
        cout << "a:"
             << sum_a
             << endl
             << "e:"
             << sum_e
             << endl
             << "i:"
             << sum_i
             << endl
             << "o:"
             << sum_o
             << endl
             << "u:"
             << sum_u
             << endl;
    }

    return 0;
}
