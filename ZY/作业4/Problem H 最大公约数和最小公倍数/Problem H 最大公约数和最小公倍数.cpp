#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, m, n, mote, max_num, min_num;

    cin >> m >> n;
    if(m > n){
        a = m;
        b = n;
    }
    else{
        a = n;
        b = m;
    }
    while(b > 0)
    {
        a %= b;
        if(a < b){
            mote = a;
            a = b;
            b = mote;
        }
        max_num = a;
    }
    min_num = m * n / max_num;
    cout << max_num
         << " "
         << min_num
         << endl;

    return 0;
}
