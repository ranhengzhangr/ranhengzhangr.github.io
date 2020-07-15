#include <iostream>

int main (void)
{
    using namespace std;

    char a, b, c, ch;

    while(cin >> a >> b >> c)
    {
        if(a > b){
            ch = a, a = b, b = ch;
        }
        if(c < b){
            if(c < a){
                ch = c, c = b, b = a, a = ch;
            }
            else{
                ch = b, b = c, c = ch;
            }
        }
        cout << a
             << " "
             << b
             << " "
             << c
             << endl;
    }

    return 0;
}
