#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    while(cin >> n)
    {
        if(n < 0||n > 100){
            cout << "Score is error!";
        }
        else{
            n /= 10;
            switch(n)
            {
                case 10:
                case 9: cout << "A"; break;
                case 8: cout << "B"; break;
                case 7: cout << "C"; break;
                case 6: cout << "D"; break;
                default : cout << "E"; break;
            }
        }
        cout << endl;
    }

    return 0;
}
