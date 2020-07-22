#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, min, RMB, hour, wait;
    float pail, mile, lenth;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> hour;
        cin.get();
        cin >> min
            >> lenth
            >> wait;
        if(wait > 5)    wait -= 5;
        else    wait = 0;
        if(hour >= 6&&hour < 23){
            pail = 5;
            for(mile = 2.5; mile <= lenth; mile += 0.5)
            {
                if(mile <= 10)    pail += 1;
                else    pail += 1.5;
            }
        }
        else{
            pail = 6;
            for(mile = 2.5; mile <= lenth; mile += 0.5)    pail += 1.5;
        }
        RMB = pail + (wait + 1) * 0.5;
        cout << RMB
             << endl;
    }

    return 0;
}
