#include <stdio.h>

int main(void)
{
	int i, n, k, t, x, y, f;

	scanf("%d", &n);
	long long int A[n][n], S1[n][n], S2[n][n], T[n][n];
	char ch[6];


	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			scanf("%lld", &A[x][y]);
			if(x == y){
                T[x][y] = 1;
			}
			else{
                T[x][y] = 0;
			}
		}
	}
	scanf("%d", &k);
	t = 0;
	while (k > 0)
	{
		ch[t] = 48 + k % 2;
		k /= 2;
		t++;
		ch[t + 1] = '\0';
	}
	for (i = 0, f = 0; i < t; i++)
	{
		if (ch[i] == '1') {
            for (x = 0; x < n; x++)
            {
                for (y = 0; y < n; y++)
                {
                    S1[x][y] = A[x][y];
                    S2[x][y] = T[x][y];
                }
            }
            for (x = 0; x < n; x++)
            {
                for (y = 0; y < n; y++)
                {
                    T[x][y] = 0;
                    for (k = 0; k < n; k++)
                    {
                        T[x][y] += S1[x][k] * S2[k][y];
                    }
                }
            }
			f++;
		}
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				S1[x][y] = A[x][y];
				S2[x][y] = A[x][y];
			}
		}
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				A[x][y] = 0;
				for (k = 0; k < n; k++)
				{
					A[x][y] += S1[x][k] * S2[k][y];
				}
			}
		}

	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y > 0) {
				printf(" ");
			}
			printf("%d", T[x][y]);
		}
		printf("\n");
	}

	return 0;
}
