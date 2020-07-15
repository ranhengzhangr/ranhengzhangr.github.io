#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, sum;

    while(cin >> n&&n != 0)
    {
        sum = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            sum += k / 100;
            k %= 100;
            sum += k / 50;
            k %= 50;
            sum += k /10;
            k %= 10;
            sum += k / 5;
            k %= 5;
            sum += k / 2;
            sum += k % 2;
        }
        cout << sum
             << endl;
    }

    return 0;
}
