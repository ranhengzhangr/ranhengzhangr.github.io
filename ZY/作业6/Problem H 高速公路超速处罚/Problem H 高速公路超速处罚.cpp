#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int speed, limit;
    float point;

    cin >> speed
        >> limit;
    point = double(speed - limit) / double(limit) * 100;
    if(point < 10){
        cout << "OK";
    }
    else{
        cout << "Exceed "
             << fixed
             << setprecision(0)
             << point
             << "%. ";
        if(point < 50){
            cout << "Ticket 200";
        }
        else{
            cout << "License Revoked";
        }
    }
    cout << endl;

    return 0;
}
