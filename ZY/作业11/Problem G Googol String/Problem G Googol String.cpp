#include <iostream>

int main (void)
{
    using namespace std;

    long long int i, n, k, t, flag;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        t = 0;
        while(t < k)
        {
            t = t * 2 + 1;
        }
        flag = 0;
        while(t > 1)
        {
            if(k == (t + 1) / 2){
                break;
            }
            else{
                if(k < (t + 1) / 2){
                    ;
                }
                else{
                    flag = 1 - flag;
                    k = t - k + 1;
                }
                t = (t - 1) / 2;
            }
        }
        cout << "Case #"
             << i + 1
             << ": "
             << flag
             << endl;
    }

    return 0;
}
