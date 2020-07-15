#include <iostream>

int main (void)
{
    using namespace std;

    int d1, d2, m1, m2, y1, y2, flag;

    cin >> m1;
    cin.get();
    cin >> d1;
    cin.get();
    cin >> y1;
    cin >> m2;
    cin.get();
    cin >> d2;
    cin.get();
    cin >> y2;
    if(y1 == y2){
        if(m1 == m2){
            if(d1 == d2){
                flag = 0;
            }
            else{
                if(d1 > d2)    flag = 1;
                else    flag = -1;
            }
        }
        else{
            if(m1 > m2)    flag = 1;
            else    flag = -1;
        }
    }
    else{
        if(y1 > y2)    flag = 1;
        else    flag = -1;
    }
    cout << flag
         << endl;

    return 0;
}
