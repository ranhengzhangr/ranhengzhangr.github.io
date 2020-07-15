#include <iostream>

int main (void)
{
    using namespace std;

    int k, sum;
    char ch;

    sum = 0;
    k = 0;
    while((ch = cin.get()) != '\n')
    {
        if(ch == ' '){
            if(k > 0)    cout << " ";
            cout << sum;
            sum = 0;
            k++;
        }
        else{
            sum++;
        }
    }
    if(k > 0)    cout << " ";
    cout << sum - 1
         << endl;

    return 0;
}
