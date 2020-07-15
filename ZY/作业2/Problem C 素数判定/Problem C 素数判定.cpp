#include <iostream>

#include <cmath>

int judge(int n);

int main (void)
{
    using namespace std;

    int i, x, y, flag;

    while(cin >> x >> y&&(x != 0||y != 0))
    {
        flag = 0;
        for(i = x; i <= y; i++)
        {
            flag += judge(i * i + i + 41);
        }
        if(flag == 0)    cout << "OK";
        else    cout << "Sorry";
        cout << endl;
    }

    return 0;
}

int judge(int n)
{
    using namespace std;

    int i, t, flag;

    if(n < 2){
        flag = 0;
    }
    else{
        flag = 0;
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0)    flag = 1;
        }
    }

    return flag;
}
