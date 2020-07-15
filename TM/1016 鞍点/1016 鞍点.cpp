#include <iostream>

int main (void)
{
    using namespace std;

    int n, x, y, ix, iy, sum, flag;

    cin >> n;
    int A[n][n];

    for(ix = 0; ix < n; ix++)
    {
        for(iy = 0; iy < n; iy++)
        {
            cin >> A[ix][iy];
        }
    }
    flag = 0;
    for(y = 0; y < n&&flag == 0; y++)
    {
        for(ix = 0, x = 0; ix < n; ix++)
        {
            if(A[ix][y] < A[x][y]){
                x = ix;
            }
        }
        for(iy = 0, sum = 0; iy < n; iy++)
        {
            if(A[x][iy] > A[x][y]){
                sum = 1;
            }
        }
        flag = 1 - sum;
    }
    if(flag == 0){
        cout << "NO";
    }
    else{
        cout << x
             << " "
             << y - 1;
    }
    cout << endl;

    return 0;
}
