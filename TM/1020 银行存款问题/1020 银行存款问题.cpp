#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i;
    float capital, interest;

    cin >> capital
        >> interest;
    interest /= 100;
    interest += 1;
    for(i = 1980; i < 2015; i++)
    {
        capital *= interest;
    }
    cout << fixed
         << setprecision(2)
         << capital
         << endl;

    return 0;
}
