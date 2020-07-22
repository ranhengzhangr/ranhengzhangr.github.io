#include <iostream>

#include <cmath>

uint8_t bit(const int n);

int main (void)
{
    using namespace std;

    int i, n;
    uint32_t k;
    uint8_t t;

    while(cin >> n)
    {
        k = pow(2, 32 - n) - 2;
        for(i = 0; i < 4; i++)
        {
            if(i > 0)    cout.put('.');
            if(n >= 8){
                t = 255;
                n -= 8;
            }
            else{
                t = bit(8 - n);
                t = ~t;
                n = 0;
            }
            cout << (uint16_t)t;
        }
        cout << " "
             << k
             << endl;
    }

    return 0;
}

uint8_t bit(const int n)
{
    using namespace std;

    int i;
    uint8_t t = 0;

    for(i = 0; i < n; i++)
    {
        t += pow(2, i);
    }

    return t;
}
