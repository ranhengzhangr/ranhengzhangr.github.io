#include <iostream>

#include <cstring>

int changer(char num[]);

int main (void)
{
    using namespace std;

    int i, n;
    char number[33];

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> number;
        cout << changer(number)
             << endl;
    }

    return 0;
}

int changer(char num[])
{
    using namespace std;

    int i, n = 0;

    for(i = 0; i < strlen(num); i++)
    {
        n *= 2;
        n += num[i] - 48;
    }

    return n;
}
