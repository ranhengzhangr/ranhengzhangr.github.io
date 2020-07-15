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
