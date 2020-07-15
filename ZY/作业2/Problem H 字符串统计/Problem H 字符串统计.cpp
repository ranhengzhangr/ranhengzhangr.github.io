#include <iostream>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, n, sum;
    char ch;

    cin >> n;
    for(cin.get(), i = 0; i < n; i++)
    {
        sum = 0;
        while((ch = cin.get()) != '\n')
        {
            if(isdigit(ch))    sum++;
        }
        cout << sum
             << endl;
    }

    return 0;
}
