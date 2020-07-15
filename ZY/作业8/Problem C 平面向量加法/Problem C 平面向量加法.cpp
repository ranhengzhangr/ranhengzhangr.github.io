#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    struct coordinate{
        float x;
        float y;
    }V[3];
    int i;

    for(i = 0; i < 2; i++)
    {
        cin >> V[i].x
            >> V[i].y;
    }
    V[2].x = V[0].x + V[1].x;
    V[2].y = V[0].y + V[1].y;
    cout << "("
         << fixed
         << setprecision(1)
         << V[2].x
         << ", "
         << fixed
         << setprecision(1)
         << V[2].y
         << ")"
         << endl;

    return 0;
}
