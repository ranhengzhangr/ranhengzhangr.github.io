#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int a, b, i, k, sum;

    cin >> a
        >> b;
    k = 1;
    sum = 0;
    for(i = 2; k <= b; i++)
    {
        if(judge(i)){
            k++;
            if(k > a)    sum += i;
        }
    }
    cout << sum
         << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, k;

    if(n < 2)    return false;
    k = sqrt(n);
    for(i = 2; i <= k; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}
