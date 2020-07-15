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
