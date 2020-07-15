#include <iostream>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, n, k, flag;
    string str;

    while(cin >> n)
    {
        cin.get();
        for(i = 0; i < n; i++)
        {
            getline(cin, str);
            flag = 0;
            for(k = 0; k < str.size() / 2; k++)
            {
                if(str[k] != str[str.size() - k - 1])    flag = 1;
            }
            if(flag == 0){
                cout << "yes"
                     << endl;
            }
            else{
                cout << "no"
                     << endl;
            }
        }
    }

    return 0;
}
