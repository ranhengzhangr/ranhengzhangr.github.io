#include <iostream>

int main (void)
{
    using namespace std;

    int A, B, C, D, E, i;

    for(i = 1; ; i++)
    {
        E = i * 5 + 1;
        if(E % 4 == 0){
            D = E / 4 * 5 + 1;
            if(D % 4 == 0){
                C = D / 4 * 5 + 1;
                if(C % 4 == 0){
                    B = C / 4 * 5 + 1;
                    if(B % 4 == 0){
                        A = B / 4 * 5 + 1;
                        break;
                    }
                }
            }
        }
    }
    cout << A
         << endl
         << B
         << endl
         << C
         << endl
         << D
         << endl
         << E
         << endl;

    return 0;
}
