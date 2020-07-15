```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, in1, in2, in3, in4, sum, year;

    while (scanf("%d", &year) != EOF )
    {
        if(year == 0){
            ;
        }
        else{
            in1 = 0, in2 = 0, in3 = 0, in4 = 1, sum = 0;
            for(i = 1; i < year; i++)
            {
                in4 += in3, in3 = in2, in2 = in1, in1 = in4;
            }
            sum = in1 + in2 + in3 + in4;
            printf("%d\n", sum);
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, sum, cow1, cow2, cow3, cow4;

    while(cin >> n&&n != 0)
    {
        cow1 = 0;
        cow2 = 0;
        cow3 = 0;
        cow4 = 1;
        for(i = 1; i < n; i++)
        {
            cow4 += cow3;
            cow3 = cow2;
            cow2 = cow1;
            cow1 = cow4;
        }
        sum = cow1 + cow2 + cow3 + cow4;
        cout << sum
             << endl;
    }

    return 0;
}

```
