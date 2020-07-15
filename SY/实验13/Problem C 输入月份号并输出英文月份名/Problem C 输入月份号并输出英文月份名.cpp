#include <iostream>

#include <cstdlib>

char *prit_month(int n);

int main (void)
{
    using namespace std;

    int n;
    char *month;

    while(cin >> n)
    {
        month = prit_month(n);
        cout << month
             << endl;
    }

    return 0;
}

char *prit_month(int n)
{
    using namespace std;

    char *month[12] = {(char *)"January", (char *)"February", (char *)"March", (char *)"April", (char *)"May", (char *)"June", (char *)"Junly", (char *)"August", (char *)"September", (char *)"October", (char *)"November", (char *)"December"};

    return month[n - 1];
}
