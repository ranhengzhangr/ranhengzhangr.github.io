#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    cout << "Speed: "
         << n
         << " - ";
    if(n > 60)    cout << "Speeding";
    else    cout << "OK";
    cout << endl;

    return 0;
}
