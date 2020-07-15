#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, i, n, r, t, k, flag;

    cin >> n;
    int cuof[n];

    for(i = 0; i < n; i++)
    {
        cin >> cuof[i];
    }
    cin >> t;
    for(i = 0; i < t; i++)
    {
        cin >> r;
        if(r < cuof[0]||r > cuof[n - 1]){
            flag = 0;
        }
        else{
            flag = 0;
            a = 0;
            b = n - 1;
            while(a <= b&&flag == 0)
            {
                k = (a + b) / 2;
                if(cuof[k] == r){
                    flag = 1;
                }
                else{
                    if(cuof[k] < r){
                        a = k + 1;
                    }
                    else{
                        b = k - 1;
                    }
                }
            }
        }
        if(flag == 0){
            cout << "Not found!"
                 << endl;
        }
        else{
            cout << k
                 << endl;
        }
    }

    return 0;
}
