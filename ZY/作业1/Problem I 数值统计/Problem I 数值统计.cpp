#include <iostream>

int main (void)
{
    using namespace std;

    float i, n, k, o, p, q;

    while(cin >> n&&n != 0)
    {
        o = 0;
        p = 0;
        q = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            if(k == 0){
                o++;
            }
            else{
                if(k > 0){
                    p++;
                }
                else{
                    q++;
                }
            }
        }
        cout << q
             << " "
             << o
             << " "
             << p
             << endl;
    }

    return 0;
}
