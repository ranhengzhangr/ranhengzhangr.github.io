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
