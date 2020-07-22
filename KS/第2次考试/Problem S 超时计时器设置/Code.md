```c
//GCC

#include <stdio.h>

float RTTS_CACULATE(float RTT, float RTTS);

float RTO_CACULATE(float RTTS, float RTTD);

float RTTD_CACULATE(float RTT, float RTTD, float RTTS);

int main (void)
{
    float RTT, RTO, RTTS, RTTD;

    scanf("%f", &RTT);
    RTTS = RTT;
    RTTD = RTTS / 2;
    RTO = RTO_CACULATE(RTTS, RTTD);
    printf("%.2f\n", RTO);
    while(scanf("%f", &RTT) != EOF)
    {
        RTTS = RTTS_CACULATE(RTT, RTTS);
        RTTD = RTTD_CACULATE(RTT, RTTD, RTTS);
        RTO = RTO_CACULATE(RTTS, RTTD);
        printf("%.2f\n", RTO);
    }

    return 0;
}

float RTTS_CACULATE(float RTT, float RTTS)
{
    float a;

    a = 1.0 / 8;
    RTTS = (1 - a) * RTTS + a * RTT;

    return RTTS;
}

float RTO_CACULATE(float RTTS, float RTTD)
{
    float RTO;

    RTO = RTTS + 4 * RTTD;

    return RTO;
}

float RTTD_CACULATE(float RTT, float RTTD, float RTTS)
{
    float b, OQT;

    OQT = RTTS - RTT;
    if(OQT < 0){
        OQT = - OQT;
    }
    b = 1.0 / 4;
    RTTD = (1 - b) * RTTD + b * OQT;

    return RTTD;
}

```

```c++
//G++

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

```
