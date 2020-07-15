#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    int x1, x2, x3, y1, y2, y3;
    float k1, k2, L, A, la, lb, lc, p;

    cin >> x1
        >> y1
        >> x2
        >> y2
        >> x3
        >> y3;
    k1 = float(x1 - x2) / float(y1 - y2);
    k2 = float(x2 - x3) / float(y2 - y3);
    if(k1 == k2){
        cout << "Impossible";
    }
    else{
        la = sqrt(float((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
        lb = sqrt(float((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)));
        lc = sqrt(float((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)));
        L = la + lb + lc;
        p = L / 2;
        A = sqrt(p * (p - la) * (p - lb) * (p - lc));
        cout << "L = "
             << fixed
             << setprecision(2)
             << L
             << ", A = "
             << fixed
             << setprecision(2)
             << A;
    }
    cout << endl;

    return 0;
}
