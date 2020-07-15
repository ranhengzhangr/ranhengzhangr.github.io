#include <iostream>

#include <cmath>

bool judge(long long int n);

int main (void)
{
    using namespace std;

    long long int i, n;

    cin >> n;
    for(i = 2; i < n; i++)
    {
        if(judge(i)&&judge(n - i))    break;
    }
    cout << n
         << " = "
         << i
         << " + "
         << n - i
         << endl;

    return 0;
}

bool judge(long long int n)
{
    using namespace std;

    long long int i, t;

    t = sqrt(n);
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}
