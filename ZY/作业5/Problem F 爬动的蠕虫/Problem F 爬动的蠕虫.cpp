#include <iostream>

int main (void)
{
    using namespace std;

    int H, T, N, U, D;

    cin >> N
        >> U
        >> D;
    H = 0;
    T = 0;
    while(H < N)
    {
        if(T > 0){
            H -= D;
            T++;
        }
        H += U;
        T++;
    }
    cout << T
         << endl;

    return 0;
}
