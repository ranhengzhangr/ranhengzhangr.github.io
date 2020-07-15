#include <iostream>

int power(int x, int n);

int main (void)
{
    using namespace std;

    int x, n;

    cin >> x
        >> n;
    cout << power(x, n)
         << endl;

    return 0;
}

int power(int x, int n)
{
    if(n == 1)    return x;
    if(n % 2 == 0){
        return power(x, n / 2) * power(x, n / 2);
    }
    else{
        return x * power(x, n - 1);
    }
}
