```c
//GCC

#include <stdio.h>

int main(void)
{
	int i, i0, t, u, r, n[2], nu[2][20];

	for (i = 0; i < 2; i++)
	{
		scanf("%d", &n[i]);
		for (i0 = 0; i0 < n[i]; i0++)
		{
			scanf("%d", &nu[i][i0]);
		}
	}
	r = 0;
	for (i = 0; i < n[0]; i++)
	{
		u = 0;
		for (i0 = 0; i0 < i; i0++)
		{
			if (nu[0][i0] == nu[0][i]) {
				i++;
				i0 = 0;
			}
		}
		for (i0 = 0; i0 < n[1]; i0++)
		{
			if (nu[1][i0] == nu[0][i]) {
				u++;
			}
		}
		if (u == 0) {
			if (i > 0) {
				printf(" ");
			}
			printf("%d", nu[0][i]);
			r = 1;
		}
	}
	for (i = 0; i < n[1]; i++)
	{
		u = 0;
		for (i0 = 0; i0 < i; i0++)
		{
			if (nu[1][i0] == nu[1][i]) {
				i++;
				i0 = 0;
			}
		}
		for (i0 = 0; i0 < n[0]; i0++)
		{
			if (nu[0][i0] == nu[1][i]) {
				u++;
			}
		}
		if (u == 0) {
			if (i > 0||r == 1) {
				printf(" ");
			}
			printf("%d", nu[1][i]);
		}
	}
	printf("\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int k, i1, i2, N1, N2;

    cin >> N1;
    int A1[N1], FLAG_A1[N1];

    for(i1 = 0; i1 < N1; i1++)
    {
        cin >> A1[i1];
        FLAG_A1[i1] = 1;
    }
    cin >> N2;
    int A2[N2], FLAG_A2[N2];

    for(i2 = 0; i2 < N2; i2++)
    {
        cin >> A2[i2];
        FLAG_A2[i2] = 1;
    }
    for(i1 = 0; i1 < N1; i1++)
    {
        for(k = i1 + 1; k < N1; k++)
        {
            while(FLAG_A1[k] == 0&&k < N1)    k++;
            if(A1[i1] == A1[k]){
                FLAG_A1[k] = 0;
            }
        }
        for(i2 = 0; i2 < N2; i2++)
        {
            while(FLAG_A2[i2] == 0&&i2 < N2)    i2++;
            if(A1[i1] == A2[i2]){
                FLAG_A1[i1] = 0;
                FLAG_A2[i2] = 0;
            }
        }
    }
    for(i2 = 0; i2 < N2; i2++)
    {
        for(k = i2 + 1; k < N2; k++)
        {
            while(FLAG_A2[k] == 0&&k < N2)    k++;
            if(A2[i2] == A2[k]){
                FLAG_A2[k] = 0;
            }
        }
    }
    k = 0;
    for(i1 = 0; i1 < N1; i1++)
    {
        if(FLAG_A1[i1] == 1){
            if(k > 0)    cout << " ";
            cout << A1[i1];
            k++;
        }
    }
    for(i2 = 0; i2 < N2; i2++)
    {
        if(FLAG_A2[i2] == 1){
            if(k > 0)    cout << " ";
            cout << A2[i2];
            k++;
        }
    }

    return 0;
}

```
