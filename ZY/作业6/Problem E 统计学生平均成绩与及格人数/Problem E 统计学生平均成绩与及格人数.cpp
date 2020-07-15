#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, cou;
    float ave;

    cin >> n;
    int A[n];

    ave = 0;
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
        ave += A[i];
    }
    ave /= n;
    cou = 0;
    for(i = 0; i < n; i++)
    {
        if(A[i] >= 60)    cou++;
    }
    cout << "average = "
         << fixed
         << setprecision(1)
         << ave
         << endl
         << "count = "
         << cou
         << endl;

    return 0;
}
