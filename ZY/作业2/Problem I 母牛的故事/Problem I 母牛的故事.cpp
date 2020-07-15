#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, sum, cow1, cow2, cow3, cow4;

    while(cin >> n&&n != 0)
    {
        cow1 = 0;
        cow2 = 0;
        cow3 = 0;
        cow4 = 1;
        for(i = 1; i < n; i++)
        {
            cow4 += cow3;
            cow3 = cow2;
            cow2 = cow1;
            cow1 = cow4;
        }
        sum = cow1 + cow2 + cow3 + cow4;
        cout << sum
             << endl;
    }

    return 0;
}
