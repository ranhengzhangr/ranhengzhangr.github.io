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
