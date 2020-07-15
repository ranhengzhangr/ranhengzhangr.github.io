#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, len;

    cin >> n;
    int A[n], k[n + 1];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    len = 0;
    i = 1;
    k[0] = 0;
    k[1] = 0;
    while(i >= 0&&i < n)
    {
        k[i]++;
        if(i > 0){
            while(A[k[i]] <= A[k[i - 1]]&&k[i] < n)    k[i]++;
        }
        if(k[i] == n){
            i--;
        }
        else{
            if(i > len)    len = i;
            k[i + 1] = k[i];
            i++;
        }
    }
    cout << ++len
         << endl;

    return 0;
}
