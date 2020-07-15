#include <iostream>

int main (void)
{
    using namespace std;

    int n, sum;

    sum = 0;
    while(cin >> n&&n > 0)
    {
        if(n % 2 != 0)    sum += n;
    }
    cout << sum
         << endl;

    return 0;
}
