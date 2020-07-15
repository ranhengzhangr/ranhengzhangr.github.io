#include <iostream>

#include <string>

int main (void)
{
    using namespace std;

    int i, n, k, t;

    cin >> n;
    struct book{
        string name;
        string time;
        char gend;
        string pone;
        string mobe;
    }address[n];

    for(i = 0; i < n; i++)
    {
        cin >> address[i].name
            >> address[i].time
            >> address[i].gend;
        cin.get();
        cin >> address[i].pone
            >> address[i].mobe;
    }
    cin >> t;
    for(i = 0; i < t; i++)
    {
        cin >> k;
        if(k >= 0&&k < n){
            cout << address[k].name
                 << " "
                 << address[k].pone
                 << " "
                 << address[k].mobe
                 << " "
                 << address[k].gend
                 << " "
                 << address[k].time;
        }
        else{
            cout << "Not Found";
        }
        cout << endl;
    }

    return 0;
}
