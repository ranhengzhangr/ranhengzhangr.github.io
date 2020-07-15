#include <iostream>

#include <cmath>

bool judge(int n);

int main (void)
{
    using namespace std;

    int a, b, i, k;

    while(cin >> a >> b)
    {
        k = 0;
        for(i = a; i <= b; i++)
        {
            if(judge(i)){
                if(k > 0)    cout << " ";
                cout << i;
                k++;
            }
        }
        cout << endl;
    }

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, t;

    t = sqrt(n);
    if(n < 2)    return false;
    for(i = 2; i <= t; i++)
    {
        if(n % i == 0)    return false;
    }

    return true;
}
