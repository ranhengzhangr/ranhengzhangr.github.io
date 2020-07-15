#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, lower, upper;

    k = 0;
    while(cin >> lower >> upper&&upper != 0)
    {
        if(k > 0)    cout << " ";
        cout << lower * upper
             << " "
             << upper - 1;
        k++;
    }
    if(k == 0)    cout << "0 0";
    cout << endl;

    return 0;
}
