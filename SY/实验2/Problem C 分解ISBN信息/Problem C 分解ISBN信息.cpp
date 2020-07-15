#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, c, d, e;

    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cin.get();
    cin >> d;
    cin.get();
    cin >> e;
    cout << "GS1 prefix: "
         << a
         << endl
         << "Group identifier: "
         << b
         << endl
         << "Publisher code: "
         << c
         << endl
         << "Item number: "
         << d
         << endl
         << "Check digit: "
         << e
         << endl;

    return 0;
}
