#include <iostream>

int main (void)
{
    using namespace std;

    int x, y, n;

    cin >> n;
    for(x = 1; x <= n; x++)
    {
        for(y = 0; y < x; y++)
        {
            if(y > 0){
                cout << "  ";
                if(x * y < 10)    cout.put(' ');
            }
            cout << x
                 << '*'
                 << y + 1
                 << '='
                 << x * (y + 1);
        }
        cout << endl;
    }

    return 0;
}
