#include <iostream>

bool judger(int n);

int main (void)
{
    using namespace std;

    int i, n, sum;

    cin >> n;
    sum = 0;
    for(i = 1; i <= n; i++)
    {
        if(judger(i))    sum += i;
    }
    cout << sum
         << endl;

    return 0;
}

bool judger(int n)
{
    using namespace std;

    if(n % 3 != 0)    return false;
    if(n % 4 != 1)    return false;

    return true;
}
