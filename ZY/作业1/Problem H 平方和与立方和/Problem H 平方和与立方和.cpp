#include <iostream>

int main (void)
{
    using namespace std;

    long int a, b, i, p, q;

    while(cin >> a >> b)
    {
        p = 0;
        q = 0;
        for(i = a; i <= b; i++)
        {
            if(i % 2 == 0)    p += i * i;
            else    q += i * i * i;
        }
        cout << p
             << " "
             << q
             << endl;
    }

    return 0;
}
