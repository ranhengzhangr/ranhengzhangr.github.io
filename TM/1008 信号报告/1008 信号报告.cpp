#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    switch(n % 10)
    {
        case 1: cout << "Faint signals, barely perceptible, "; break;
        case 2: cout << "Very weak signals, "; break;
        case 3: cout << "Weak signals, "; break;
        case 4: cout << "Fair signals, "; break;
        case 5: cout << "Fairly good signals, "; break;
        case 6: cout << "Good signals, "; break;
        case 7: cout << "Moderately strong signals, "; break;
        case 8: cout << "Strong signals, "; break;
        case 9: cout << "Extremely strong signals, "; break;
    }
    switch(n / 10)
    {
        case 1: cout << "unreadable."; break;
        case 2: cout << "barely readable, occasional words distinguishable."; break;
        case 3: cout << "readable with considerable difficulty."; break;
        case 4: cout << "readable with practically no difficulty."; break;
        case 5: cout << "perfectly readable."; break;
    }
    cout << endl;

    return 0;
}
