#include <iostream>

bool judge(int n);

int main (void)
{
    using namespace std;

    int i, n, k;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        if(judge(k)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}

bool judge(int n)
{
    using namespace std;

    int A[n], i;

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for(i = 0; i < n / 2; i++)
    {
        if(A[i] != A[n - i - 1])    return false;
    }

    return true;
}
