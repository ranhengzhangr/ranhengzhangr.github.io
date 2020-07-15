#include <iostream>

int main (void)
{
    using namespace std;

    int a, b;
    char ch;

    cin >> a;
    cin.get();
    cin.get(ch);
    cin >> b;
    if(ch == '+')    cout << a + b;
    else if(ch == '-')    cout << a - b;
    else if(ch == '*')    cout << a * b;
    else if(ch == '/')    cout << a / b;
    else if(ch == '%')    cout << a % b;
    else    cout << "ERROR";
    cout << endl;

    return 0;
}
