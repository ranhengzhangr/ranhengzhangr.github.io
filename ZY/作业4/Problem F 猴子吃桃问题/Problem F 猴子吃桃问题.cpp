#include <iostream>

int main (void)
{
    using namespace std;

    int n, sum;

    cin >> n;
    sum = 1;
    while(n > 1)
    {
        sum = (sum + 1) * 2;
        n--;
    }
    cout << sum
         << endl;

    return 0;
}
