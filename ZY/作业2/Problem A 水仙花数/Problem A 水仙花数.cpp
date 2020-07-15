#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, c, i, m, n, k, sum;

    while(cin >> m >> n)
    {
        if(100 <= m&&m <= n&&n <= 999){
            sum = 0;
            for(i = m; i <= n; i++)
            {
                k = i;
                c = k % 10;
                k /= 10;
                b = k % 10;
                a = k / 10;
                if(a * a * a + b * b * b + c * c * c == i){
                    if(sum > 0)    cout << " ";
                    cout << i;
                    sum++;
                }
            }
            if(sum == 0)    cout << "no";
            cout << endl;
        }
    }

    return 0;
}
