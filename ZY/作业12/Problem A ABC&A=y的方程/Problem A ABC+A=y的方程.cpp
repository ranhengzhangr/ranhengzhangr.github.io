#include <iostream>

int main (void)
{
    using namespace std;

    int A, B, C, y, k;

    cin >> y;
    k = 0;
    for(A = 1; A < 10&&k == 0; A++)
    {
        for(B = 0; B < 10&&k == 0; B++)
        {
            for(C = 0; C < 10&&k == 0; C++)
            {
                if((A * 10 + B) * C + A == y)    k = 1;
            }
        }
    }
    cout << A - 1
         << " "
         << B - 1
         << " "
         << C - 1;

    return 0;
}
