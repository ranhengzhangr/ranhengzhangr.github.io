#include <iostream>

int killer_queen(int t);

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    cout << killer_queen(n)
         << endl;

    return 0;
}

int killer_queen(int t)
{
    using namespace std;

    int i = 0;

    while(t != 1)
    {
        if(t % 2 != 0)    t = t * 3 + 1;
        t /= 2;
        i++;
    }

    return i;
}
