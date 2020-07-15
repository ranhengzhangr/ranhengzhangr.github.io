#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, T;

    cin >> T
        >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        if(k == T){
            if(i == 0)    cout << "Bingo!";
            else if(i < 3)    cout << "Lucky You!";
            else    cout << "Good Guess!";
            cout << endl;
            break;
        }
        else{
            if(k < 0||i == n - 1){
                cout << "Game Over"
                     << endl;
                break;
            }
            else{
                if(k < T){
                    cout << "Too small";
                }
                else{
                    cout << "Too big";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
