#include <iostream>

int absolute(int n);

int main (void)
{
    using namespace std;

    int p, q, x, y, ix, iy;

    while(cin >> x >> y)
    {
        int A[x][y];

        p = 0;
        q = 0;
        for(ix = 0; ix < x; ix++)
        {
            for(iy = 0; iy < y; iy++)
            {
                cin >> A[ix][iy];
                if(absolute(A[p][q]) < absolute(A[ix][iy])){
                    p = ix;
                    q = iy;
                }
            }
        }
        cout << p + 1
             << " "
             << q + 1
             << " "
             << A[p][q]
             << endl;
    }

    return 0;
}

int absolute(int n)
{
    using namespace std;

    if(n < 0)    return -n;
    else    return n;
}
