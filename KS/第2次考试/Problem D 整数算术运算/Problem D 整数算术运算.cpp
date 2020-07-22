#include <iostream>

int main (void)
{
    using namespace std;

    int a, b;

    cin >> a
        >> b;
    cout << a
         << " + "
         << b
         << " = "
         << a + b
         << endl;
    cout << a
         << " - "
         << b
         << " = "
         << a - b
         << endl;
    cout << a
         << " * "
         << b
         << " = "
         << a * b
         << endl;
    cout << a
         << " / "
         << b
         << " = "
         << a / b
         << endl;

    return 0;
}
