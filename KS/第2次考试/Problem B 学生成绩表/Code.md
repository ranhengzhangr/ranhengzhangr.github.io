```c
//GCC

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

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, zuoye, shiyan, qimo;
    float qiping;
    char xingming[11], xuehao[11];

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin.get();
        cin >> xingming;
        cin.get();
        cin >> xuehao
            >> zuoye
            >> shiyan
            >> qimo;
        qiping = (float)zuoye * 0.1 + (float)shiyan * 0.3 + (float)qimo * 0.6;
        cout << xingming
             << ' '
             << xuehao
             << ' '
             << zuoye
             << ' '
             << shiyan
             << ' '
             << qimo
             << ' '
             << fixed
             << setprecision(2)
             << qiping
             << endl;
    }

    return 0;
}

```
