#include <iostream>

#include <iomanip>

#include <cstdlib>

void split_time(int total_sec, int *hr, int *min, int *sec);

int main (void)
{
    using namespace std;

    int total_sec;
    int hr, min, sec;

    cin >> total_sec;
    split_time(total_sec, &hr, &min, &sec);
    cout << setw(2)
         << right
         << setfill('0')
         << hr
         << ":"
         << setw(2)
         << right
         << setfill('0')
         << min
         << ":"
         << setw(2)
         << right
         << setfill('0')
         << sec
         << endl;

    return 0;
}

void split_time(int total_sec, int *hr, int *min, int *sec)
{
    using namespace std;

    *sec = total_sec % 60;
    total_sec /= 60;
    *min = total_sec % 60;
    *hr = total_sec / 60;
}
