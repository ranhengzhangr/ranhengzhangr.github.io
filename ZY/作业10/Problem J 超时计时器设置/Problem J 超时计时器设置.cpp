#include <iostream>

#include <iomanip>

float absolute(float n);

int main (void)
{
    using namespace std;

    int i;
    float a, b, RTT, RTTS, RTO, RTTD;

    a = 0.125;
    b = 0.25;
    i = 0;
    while(cin >> RTT)
    {
        if(i == 0){
            RTTS = RTT;
            RTTD = RTT / 2;
        }
        else{
            RTTS = (1 - a) * RTTS + a * RTT;
            RTTD = (1 - b) * RTTD + b * absolute(RTTS - RTT);
        }
        RTO = RTTS + 4 * RTTD;
        cout << fixed
             << setprecision(2)
             << RTO
             << endl;
        i++;
    }

    return 0;
}

float absolute(float n)
{
    using namespace std;

    if(n < 0)    return -n;
    else    return n;
}
