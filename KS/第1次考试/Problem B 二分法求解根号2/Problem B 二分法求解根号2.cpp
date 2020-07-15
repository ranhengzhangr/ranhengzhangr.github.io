#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    double eps, mid, right, left;

    cin >> eps;
    left = 1;
    right = 2;
    while(right - left >= eps)
    {
        mid = (right + left) / 2;
        if(mid * mid > 2)    right = mid;
        else    left = mid;
    }
    cout << fixed
         << setprecision(6)
         << mid
         << endl;

    return 0;
}
