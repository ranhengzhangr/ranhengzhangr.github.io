```c
//GCC

#include <stdio.h>

#include <math.h>

int judge(int x, int y);

int main(void)
{
	int i, x, y, flag;

	while (scanf("%d %d", &x, &y) != EOF&&(x != 0 || y != 0))
	{
		flag = judge(x, y);
		if (flag == 0) {
			printf("OK\n");
		}
		else {
			printf("Sorry\n");
		}
	}
}

int judge(int x, int y)
{
	int i, t, r, n, flag = 0;
	for (i = x; i <= y; i++)
	{
		r = i * i + i + 41;
		if (r > 3) {
			t = sqrt(r);
			for (n = 2; n <= t; n++)
			{
				if (r % n == 0) {
					flag = 1;
				}
			}
		}
	}

	return flag;
}

```

```c++
//G++

#include <iostream>

#include <cmath>

int judge(int n);

int main (void)
{
    using namespace std;

    int i, x, y, flag;

    while(cin >> x >> y&&(x != 0||y != 0))
    {
        flag = 0;
        for(i = x; i <= y; i++)
        {
            flag += judge(i * i + i + 41);
        }
        if(flag == 0)    cout << "OK";
        else    cout << "Sorry";
        cout << endl;
    }

    return 0;
}

int judge(int n)
{
    using namespace std;

    int i, t, flag;

    if(n < 2){
        flag = 0;
    }
    else{
        flag = 0;
        t = sqrt(n);
        for(i = 2; i <= t; i++)
        {
            if(n % i == 0)    flag = 1;
        }
    }

    return flag;
}

```
