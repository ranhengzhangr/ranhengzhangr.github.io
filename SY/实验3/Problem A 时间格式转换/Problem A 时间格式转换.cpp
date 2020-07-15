#include <iostream>

int main (void)
{
    using namespace std;

    int h, m;

    cin >> h;
    cin.get();
    cin >> m;
    if(h > 0&&h <= 12){
        cout << h;
    }
    else{
        if(h == 0){
            cout << "12";
        }
        else{
            cout << h - 12;
        }
    }
    cout << ":"
         << m
         << " ";
    if(h < 12){
        cout << "AM"
             << endl;
    }
    else{
        cout << "PM"
             << endl;
    }

    return 0;
}
