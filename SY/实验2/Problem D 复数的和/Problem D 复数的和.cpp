#include <iostream>

int main (void)
{
    using namespace std;

    int t1, t2, i1, i2, t, i;

    cin >> t1
        >> i1;
    cin.get();
    cin >> t2
        >> i2;
    cin.get();
    t = t1 + t2;
    i = i1 + i2;
    cout << "("
         << t1
         << "+"
         << i1
         << "i)+("
         << t2
         << "+"
         << i2
         << "i)="
         << t
         << "+"
         << i
         << "i"
         << endl;

    return 0;
}
