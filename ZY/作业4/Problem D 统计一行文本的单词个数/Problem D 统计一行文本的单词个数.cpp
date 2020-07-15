#include <iostream>

int main (void)
{
    using namespace std;

    int sum;
    char ch;

    sum = 1;
    while((ch = cin.get()) != '\n')
    {
        if(ch == ' ')    sum++;
    }
    cout << sum
         << endl;

    return 0;
}
