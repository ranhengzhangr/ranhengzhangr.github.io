#include <iostream>

int main (void)
{
    using namespace std;

    int i, n;

    cin >> n;
    i = 1;
    while((4 * i * i) <= 100)
    {
        cout << 4 * i * i
             << endl;
        i++;
    }

    return 0;
}
