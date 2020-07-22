```c
//GCC

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

```

```c++
//G++

#include <iostream>

void index(long long int* X, int k, int n);

void multiply(long long int* A, int m, long long int* B, int n, int t);

int main(void)
{
    using namespace std;

    int n, k, ix, iy;

    cin >> n;
    long long int T[n][n];
    long long int* A = &T[0][0];

    for (ix = 0; ix < n; ix++)
    {
        for (iy = 0; iy < n; iy++)
        {
            cin >> T[ix][iy];
        }
    }
    cin >> k;
    index(A, k, n);
    for (ix = 0; ix < n; ix++)
    {
        for (iy = 0; iy < n; iy++)
        {
            if (iy > 0)    cout << " ";
            cout << *A;
            A++;
        }
        cout << endl;
    }

    return 0;
}

void index(long long int* X, int k, int n)
{
    using namespace std;

    int ix, iy;
    long long int S[n][n], T[n][n];
    long long int* P = &S[0][0], * Q = &T[0][0], * J = X;

    if (k < 2) {
        if (k == 0) {
            for (ix = 0; ix < n; ix++)
            {
                for (iy = 0; iy < n; iy++)
                {
                    if (ix == iy)    S[ix][iy] = 1;
                    else    S[ix][iy] = 0;
                }
            }
        }
        else {
            for (ix = 0; ix < n; ix++)
            {
                for (iy = 0; iy < n; iy++)
                {
                    S[ix][iy] = *X;
                    X++;
                }
            }
        }
    }
    else {
        for (ix = 0; ix < n; ix++)
        {
            for (iy = 0; iy < n; iy++)
            {
                S[ix][iy] = *X;
                T[ix][iy] = *X;
                X++;
            }
        }
        multiply(P, k / 2, Q, k / 2, n);
        multiply(P, 1, Q, k % 2, n);
    }
    X = J;
    for (ix = 0; ix < n; ix++)
    {
        for (iy = 0; iy < n; iy++)
        {
            *X = S[ix][iy];
            X++;
        }
    }
}

void multiply(long long int* A, int m, long long int* B, int n, int t)
{
    using namespace std;

    int ix, iy, i;
    long long int X[t][t], Y[t][t], Z[t][t];
    long long int* P = &X[0][0], * Q = &Y[0][0], * R = &Z[0][0], * J = A;

    for (ix = 0; ix < t; ix++)
    {
        for (iy = 0; iy < t; iy++)
        {
            X[ix][iy] = *A;
            Y[ix][iy] = *B;
            A++;
            B++;
        }
    }
    index(P, m, t);
    index(Q, n, t);
    for (ix = 0; ix < t; ix++)
    {
        for (iy = 0; iy < t; iy++)
        {
            Z[ix][iy] = 0;
            for (i = 0; i < t; i++)
            {
                Z[ix][iy] += X[ix][i] * Y[i][iy];
            }
        }
    }
    A = J;
    for (ix = 0; ix < t; ix++)
    {
        for (iy = 0; iy < t; iy++)
        {
            *A = Z[ix][iy];
            A++;
        }
    }
}

```
