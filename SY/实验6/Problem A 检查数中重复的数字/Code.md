```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, t, x[10] = {0};
    long int n;

    while(scanf("%ld", &n) != EOF)
    {

        for(i = 0; n > 0; i++)
        {
            t = n % 10;
            n = n / 10;
            x[t]++;
        }
        printf("  0  1  2  3  4  5  6  7  8  9\n");
        for(i = 0; i <= 9; i++)
        {
            printf("%3d", x[i]);
        }
        printf("\n");
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, sum[10] = {0};
    char ch;

    while((ch = cin.get()) != '\n')
    {
        switch(ch)
        {
            case '0': sum[0]++; break;
            case '1': sum[1]++; break;
            case '2': sum[2]++; break;
            case '3': sum[3]++; break;
            case '4': sum[4]++; break;
            case '5': sum[5]++; break;
            case '6': sum[6]++; break;
            case '7': sum[7]++; break;
            case '8': sum[8]++; break;
            case '9': sum[9]++; break;
        }
    }
    cout << "  0  1  2  3  4  5  6  7  8  9"
         << endl;
    for(i = 0; i < 10; i++)
    {
        cout << setw(3)
             << right
             << sum[i];
    }
    cout << endl;

    return 0;
}

```
