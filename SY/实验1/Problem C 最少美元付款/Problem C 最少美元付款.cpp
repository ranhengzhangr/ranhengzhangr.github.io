#include <iostream>

int main (void)
{
    using namespace std;

    int n;
    cin >> n;
    cout << "$20 bills: "
         << n / 20
         << endl;
    n %= 20;
    cout << "$10 bills: "
         << n / 10
         << endl;
    n %= 10;
    cout << "$5 bills: "
         << n / 5
         << endl
         << "$1 bills: "
         << n % 5
         << endl;

    return 0;
}
