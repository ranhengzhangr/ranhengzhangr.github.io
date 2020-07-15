#include <iostream>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, n, k, sum;
    string str;

    cin >> n;
    cin.get();
    for(i = 0; i < n; i++)
    {
        getline(cin, str);
        sum = 0;
        for(k = 0; k < str.size(); k++)
        {
            if(str[k] < 0)    sum++;
        }
        cout << sum / 3
             << endl;
    }

    return 0;
}
