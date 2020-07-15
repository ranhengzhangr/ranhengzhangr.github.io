#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, n, f;

    k = 0;
    while(cin >> n >> f&&f != 0)
    {
        n *= f;
        f--;
        if(k > 0)    cout << " ";
        cout << n
             << " "
             << f;
        k++;
    }
    if(k == 0)    cout << "0 0";
    cout << endl;

    return 0;
}
