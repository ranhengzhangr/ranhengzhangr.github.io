#include <iostream>

int main (void)
{
    using namespace std;

    int i, n;

    cout << "[1] apple"
         << endl
         << "[2] pear"
         << endl
         << "[3] orange"
         << endl
         << "[4] grape"
         << endl
         << "[0] exit"
         << endl;
    for(i = 0; i < 5; i++)
    {
        cin >> n;
        if(n == 0){
            break;
        }
        else{
            cout << "price = ";
            switch(n)
            {
                case 1: cout << "3.00"; break;
                case 2: cout << "2.50"; break;
                case 3: cout << "4.10"; break;
                case 4: cout << "10.20"; break;
                default: cout << "0.00"; break;
            }
            cout << endl;
        }
    }

    return 0;
}
