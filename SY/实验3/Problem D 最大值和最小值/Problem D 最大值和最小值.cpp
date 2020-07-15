#include <iostream>

int main (void)
{
    using namespace std;

    int a[4], L, S, i;

    for(i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for(i = 1, L = a[0], S = a[0]; i < 4; i++)
    {
        if(a[i] < S){
            S = a[i];
        }
        if(a[i] > L){
            L = a[i];
        }
    }
    cout << "Largest = "
         << L
         << ", Smallest = "
         << S
         << endl;

    return 0;
}
