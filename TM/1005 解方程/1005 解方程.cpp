#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    double a, b, c, x1, x2;

    cin >> a
        >> b
        >> c;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if(x1 > x2){
        cout << fixed
             << setprecision(5)
             << x1;
    }
    else{
        cout << fixed
             << setprecision(5)
             << x2;
    }
    cout << endl;

    return 0;
}
