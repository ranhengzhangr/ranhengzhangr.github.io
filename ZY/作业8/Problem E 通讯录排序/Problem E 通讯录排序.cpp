#include <iostream>

#include <string>

int main (void)
{
    using namespace std;

    int i, n, k, t;
    string mote;

    cin >> n;
    struct book{
        string name;
        string year;
        string pone;
    }address[n];

    for(i = 0; i < n; i++)
    {
        cin.get();
        cin >> address[i].name
            >> address[i].year
            >> address[i].pone;
    }
    for(i = 0; i < n - 1; i++)
    {
        k = 0;
        for(t = 1; t < n - i; t++)
        {
            if(address[k].year < address[t].year){
                k = t;
            }
        }
        mote = address[n - i - 1].name;
        address[n - i - 1].name = address[k].name;
        address[k].name = mote;
        mote = address[n - i - 1].year;
        address[n - i - 1].year = address[k].year;
        address[k].year = mote;
        mote = address[n - i - 1].pone;
        address[n - i - 1].pone = address[k].pone;
        address[k].pone = mote;
    }
    for(i = 0; i < n; i++)
    {
        cout << address[i].name
             << " "
             << address[i].year
             << " "
             << address[i].pone
             << endl;
    }

    return 0;
}
