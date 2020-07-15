#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, k;

    a = 0;
    b = 0;
    while(cin >> k&&k != -1)
    {
        if(k % 2 == 0)    a++;
        else    b++;
    }
    cout << b
         << " "
         << a
         << endl;

    return 0;
}
