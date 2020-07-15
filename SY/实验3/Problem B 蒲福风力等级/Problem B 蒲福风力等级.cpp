#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    if(n < 1)
        cout << "Calm";
    else if(n < 3)
        cout << "Light air";
    else if(n < 27)
        cout << "Breeze";
    else if(n < 47)
        cout << "Gale";
    else if(n < 63)
        cout << "Storm";
    else
        cout << "Hurricane";
    cout << endl;

    return 0;
}
