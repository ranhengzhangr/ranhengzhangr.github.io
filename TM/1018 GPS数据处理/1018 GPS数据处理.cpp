#include <iostream>

#include <iomanip>

#include <cstring>

int main (void)
{
    using namespace std;

    int time;
    char ch, sign[4];

    while(cin.get(sign, 4)&&strcmp(sign, "END") != 0)
    {
        while((ch = cin.get()) != ',');
        cin >> time;
        while((ch = cin.get()) != '\n');
        time += 80000;
        if(time > 245959)    time -= 240000;
        cout << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time / 10000
             << ":";
        time %= 10000;
        cout << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time / 100
             << ":"
             << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time % 100
             << endl;
    }

    return 0;
}
