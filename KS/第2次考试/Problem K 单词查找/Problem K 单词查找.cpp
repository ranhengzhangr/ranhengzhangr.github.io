#include <iostream>

#include <cstring>

bool finder(const char sorce[], const char target[]);

int main (void)
{
    using namespace std;

    int i, n;
    char sor[1001], tar[11];

    cin >> n;
    cin.get();
    for(i = 0; i < n; i++)
    {
        cin.getline(sor, 1001, '\n');
        cin.getline(tar, 11, '\n');
        if(finder(sor, tar))    cout << "YES";
        else    cout << "NO";
        cout << endl;
    }

    return 0;
}

bool finder(const char sorce[], const char target[])
{
    using namespace std;

    int a, b, sum;

    for(a = 0; a < strlen(sorce) - strlen(target); a++)
    {
        if(sorce[a] == target[0]){
            for(b = 1, sum = 1; b < strlen(target); b++)
            {
                if(sorce[a + b] != target[b])    break;
                sum++;
            }
            if(sum == strlen(target))    return true;
        }
    }

    return false;
}
