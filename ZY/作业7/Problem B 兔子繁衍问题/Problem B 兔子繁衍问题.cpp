#include <iostream>

int main (void)
{
    using namespace std;

    int n, T, R1, R2, R3;

    cin >> n;
    R1 = 1;
    R2 = 0;
    R3 = 0;
    T = 1;
    while(R1 + R2 + R3 < n)
    {
        R3 += R2;
        R2 = R1;
        R1 = R3;
        T++;
    }
    cout << T
         << endl;

    return 0;
}
