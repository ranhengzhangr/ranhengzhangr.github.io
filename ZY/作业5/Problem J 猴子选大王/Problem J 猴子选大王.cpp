#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, t, flag;

    cin >> n;
    int A[n];

    flag = n;
    for(i = 0; i < n; i++)
    {
        A[i] = 4;
    }
    i = 0;
    k = 1;
    while(flag > 1)
    {
        while(A[i] == 0)
        {
            i++;
            i %= n;
        }
        A[i] = k;
        if(A[i] == 0)    flag--;
        i++;
        i %= n;
        k++;
        k %= 3;
    }
    for(i = 0; i < n; i++)
    {
        if(A[i] != 0){
            cout << ++i
                 << endl;
            break;
        }
    }

    return 0;
}
