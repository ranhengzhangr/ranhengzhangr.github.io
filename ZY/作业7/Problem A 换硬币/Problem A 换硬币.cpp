#include <iostream>

int main (void)
{
    using namespace std;

    int x, fen5, fen2, fen1, total, c_ount;

    cin >> x;
    c_ount = 0;
    for(fen5 = x / 5; fen5 > 0; fen5--)
    {
        for(fen2 = (x - fen5 * 5) / 2; fen2 > 0; fen2--)
        {
            fen1 = x - fen5 * 5 - fen2 * 2;
            if(fen1 > 0){
                total = fen5 + fen2 + fen1;
                c_ount++;
                cout << "fen5:"
                     << fen5
                     << ", fen2:"
                     << fen2
                     << ", fen1:"
                     << fen1
                     << ", total:"
                     << total
                     << endl;
            }
        }
    }
    cout << "count = "
         << c_ount
         << endl;

    return 0;
}
