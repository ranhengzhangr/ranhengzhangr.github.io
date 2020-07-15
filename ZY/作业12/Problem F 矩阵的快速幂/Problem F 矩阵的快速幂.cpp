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
