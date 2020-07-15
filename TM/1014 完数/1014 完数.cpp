#include <iostream>

bool judge(int n);

int main (void)
{
    using namespace std;

    int a, b, i, k;

    cin >> a
        >> b;
    k = 0;
    for(i = a; i <= b; i++)
    {
        if(judge(i)){
            if(k > 0)    cout << " ";
            cout << i;
            k++;
        }
    }
    if(k == 0)    cout << "NIL";
    cout << endl;

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int i, sum;

    if(n < 6)    return false;
    sum = 1;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)    sum += i;
    }
    if(sum == n)    return true;

    return false;
}
