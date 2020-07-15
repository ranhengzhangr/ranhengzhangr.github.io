#include <iostream>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, n, m, k;

    cin >> n
        >> m;
    k = 0;
    for(i = n; i <= m; i++)
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

    int i, k;

    if(n < 6)    return false;
    k = 1;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0){
            k += i;
        }
    }
    if(k == n)    return true;
    else    return false;
}
