#include <iostream>

int main (void)
{
    using namespace std;

    int A, T, P, X;

    while(cin >> A)
    {
        cin.get();
        cin >> T;
        cin.get();
        cin >> P;
        cin.get();
        cin >> X;
        if(A < 0||A > 255||T < 0||T > 255||P < 0||P > 255||X < 0||X > 255)    cout << "NO";
        else if(A < 128)    cout << "A";
        else if(A < 192)    cout << "B";
        else if(A < 224)    cout << "C";
        else if(A < 240)    cout << "D";
        else    cout << "E";
        cout << endl;
    }

    return 0;
}
