```c
//GCC

#include <stdio.h>

int average_full(int r, int p, const int a[]);

int average_lost(int r,int q, int p, const int a[]);

int main (void)
{
    int m, n, a[100] = {0};

    while(scanf("%d %d", &n, &m) != EOF )
    {
        int t = 0;

        for (int i = 0; i < n; i++)
        {
            a[i] = 2 + 2 * i;
        }
        for (; n > m; n -= m)
        {
            average_full(t, m, a);
            t++;
        }
        average_lost(t, m, n, a);
    }

    return 0;
}

int average_full(int r, int p,const int a[])
{
    int ave, sum = 0, c = 0, i;

    for(i = r * p; c < p; c++)
    {
        sum += a[i];
        i++;
    }
    ave = sum / p;
    printf("%d ", ave);
}

int average_lost(int r,int q, int p, const int a[])
{
    int ave, sum = 0, c = 0, i;

    for(i = r * q; c < p; c++)
    {
        sum += a[i];
        i++;
    }
    ave = sum / p;
    printf("%d\n", ave);
}

```

```c++
//G++

#include <iostream>

int main(void)
{
	using namespace std;

	int i, m, n, k, t, h, sum;


	while (cin >> m >> n)
	{
		h = 0;
		t = 0;
		while (m > n)
		{
			sum = 0;
			for (k = 0; k < n; k++)
			{
				t += 2;
				sum += t;
			}
			sum /= n;
			if (h > 0)    cout << " ";
			cout << sum;
			m -= n;
			h++;
		}
		if (m > 0) {
			sum = 0;
			for (k = 0; k < m; k++)
			{
				t += 2;
				sum += t;
			}
			sum /= m;
			if (h > 0)    cout << " ";
			cout << sum;
		}
		cout << endl;
	}

	return 0;
}

```
