#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, n, k, flag;

    cin >> n;
    cout << n
         << "=";
    k = 0;
    while(n > 1)
    {
        flag = 0;
        for(i = 2; i <= n&&flag == 0; i++)
        {
            if(judge(i)&&n % i == 0)    flag = 1;
        }
        i--;
        if(k > 0)    cout << "*";
        cout << i;
        n /= i;
        k++;
    }
    cout << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, t;

    t = sqrt(n);
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}
