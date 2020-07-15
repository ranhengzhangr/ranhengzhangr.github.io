#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, k, n;

    cin >> n;
    cout << n
         << "=";
    k = 0;
    while(n > 1)
    {
        for(i = 2; i <= n; i++)
        {
            if(judge(i)&&n % i == 0){
                if(k > 0)    cout << "*";
                cout << i;
                n /= i;
                k++;
                break;
            }
        }
    }
    cout << endl;

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
