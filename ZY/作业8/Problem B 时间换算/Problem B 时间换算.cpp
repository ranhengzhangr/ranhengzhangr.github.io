#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int n, k, h, m, s;

    cin >> h;
    cin.get();
    cin >> m;
    cin.get();
    cin >> s;
    cin >> n;
    k = h * 3600 + m * 60 + s + n;
    s = k % 60;
    k /= 60;
    m = k % 60;
    h = k / 60;
    if(h > 23)    h -= 24;
    cout << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << h
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << m
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << s
         << endl;

    return 0;
}
