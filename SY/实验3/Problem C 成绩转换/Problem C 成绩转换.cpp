#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    if(n < 0||n > 100){
        cout << "Illegal grade";
    }
    else{
        if(n < 50){
            cout << "F";
        }
        else{
            switch((n - 50) / 10)
            {
                case 0: cout << "F"; break;
                case 1: cout << "D"; break;
                case 2: cout << "C"; break;
                case 3: cout << "B"; break;
                default : cout << "A"; break;
            }
        }
    }
    cout << endl;

    return 0;
}
