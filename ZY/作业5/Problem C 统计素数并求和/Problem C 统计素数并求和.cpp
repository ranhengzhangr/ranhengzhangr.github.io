#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, m, n, sum, add;

    cin >> m
        >> n;
    sum = 0;
    add = 0;
    for(i = m; i <= n; i++)
    {
        if(judge(i)){
            add++;
            sum += i;
        }
    }
    cout << add
         << " "
         << sum
         << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, t, flag;

    if(n < 2)    return false;
    t = sqrt(n);
    flag = 0;
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    flag = 1;
    }
    if(flag == 0)    return true;
    else    return false;
}
