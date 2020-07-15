#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, x, y, sum, flag;

    cin >> n;
    int A[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    flag = 0;
    for(x = 0; x < n&&flag == 0; x++)
    {
        y = 0;
        for(i = 0; i < n; i++)
        {
            if(A[x][y] < A[x][i])    y = i;
        }
        sum = 0;
        for(k = 0; k < n; k++)
        {
            if(A[x][y] > A[k][y])    sum++;
        }
        if(sum == 0)    flag = 1;
    }
    if(flag == 0){
        cout << "NONE";
    }
    else{
        cout << --x
             << " "
             << y
             << endl;
    }

    return 0;
}
