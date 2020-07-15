#include <iostream>

int main (void)
{
    using namespace std;

    int k1, k2, k3, k4;

    while(cin >> k1)
    {
        cin.get();
        cin >> k2;
        cin.get();
        cin >> k3;
        cin.get();
        cin >> k4;
        if(k1 < 1||k1 > 255||k2 < 0||k2 > 255||k3 < 0||k3 > 255||k4 < 0||k4 > 255){
            cout << "NO";
        }
        else{
            if(k1 < 128)    cout << "A";
            else if(k1 < 192)    cout << "B";
            else if(k1 < 224)    cout << "C";
            else if(k1 < 240)    cout << "D";
            else    cout << "E";
        }
        cout << endl;
    }

    return 0;
}
