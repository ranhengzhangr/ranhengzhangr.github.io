#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, a, b, sum;

    cin >> a
        >> b;
    sum = 0;
    for(i = 0; i <= b - a; i++)
    {
        if(i % 5 == 0&&i > 0)    cout << endl;
        cout << setw(5)
             << right
             << i + a;
        sum += i + a;
    }
    cout << endl
         << endl
         << "Sum = "
         << sum
         << endl;

    return 0;
}
