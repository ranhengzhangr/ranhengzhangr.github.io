#include <iostream>

void swap(int *a, int *b);

int main (void)
{
    using namespace std;

    int a, b;

    cin >> a
        >> b;
    swap(&a, &b);
    cout << a
         << " "
         << b
         << endl;

    return 0;
}

void swap(int *a, int *b)
{
    using namespace std;

    int mote;

    mote = *a, *a = *b, *b = mote;
}
