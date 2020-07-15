#include <stdio.h>

int main (void)
{
    int i, n, ZY, SY, QM;
    float QP;
    char XM[11], XH[11];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        getchar();
        scanf("%s %s %d %d %d", &XM, &XH, &ZY, &SY, &QM);
        QP = (float)ZY * 0.1 + (float)SY * 0.3 + (float)QM * 0.6;
        printf("%s %s %d %d %d %.2f\n", XM, XH, ZY, SY, QM, QP);
    }

    return 0;
}
