#include <iostream>

int main (void)
{
    using namespace std;

    int i, A, T, P, X, IP;

    while(cin >> A)
    {
        cin.get();
        cin >> T;
        cin.get();
        cin >> P;
        cin.get();
        cin >> X;
        cin >> IP;
        A &= IP;
        cin.get();
        cin >> IP;
        T &= IP;
        cin.get();
        cin >> IP;
        P &= IP;
        cin.get();
        cin >> IP;
        X &= IP;
        cout << A
             << "."
             << T
             << "."
             << P
             << "."
             << X
             << endl;
    }

    return 0;
}
