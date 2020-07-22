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
