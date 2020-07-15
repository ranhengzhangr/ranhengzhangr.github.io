#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, l, k, flag;
    float t, sum;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> l;
        flag = 1;
        sum = 0;
        for(k = 0; k < l; k++)
        {
            t = 1.0 / (k + 1) * flag;
            sum += t;
            flag = -flag;
        }
        cout << fixed
             << setprecision(2)
             << sum
             << endl;
    }

    return 0;
}
