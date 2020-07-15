#include <stdio.h>

int main(void)
{
	int i, t, n, x, y, f, v, max, add, flag;

	scanf("%d %d", &v, &f);
	int flower[f][v], pla[f], pac[f], aum[v];

	max = 0;
	for (i = 0; i < v; i++)
	{
		aum[i] = 0;
	}
	for (x = 0; x < f; x++)
	{
		for (y = 0; y < v; y++)
		{
			scanf("%d", &flower[x][y]);
		}
		max += flower[x][x];
		pla[x] = -1;
	}
	i = 0;
	while (pla[0] < f)
	{
		if (i == f - 1) {
			for (pla[i] = 0; pla[i] < v; pla[i]++)
			{
				flag = 1;
				while (flag != 0)
				{
					flag = 0;
					for (n = 0; n < f - 1; n++)
					{
						if (pla[i] == pla[n]) {
							pla[i]++;
							flag = 1;
						}
					}
				}
				if(pla[i] < v){
                    add = 0;
			    	for (n = 0; n < f; n++)
			    	{
			    		add += flower[n][pla[n]];
			    	}
			    	if (add > max) {
					    max = add;
				    	for (n = 0; n < f; n++)
				    	{
                            pac[n] = pla[n];
			    		}
			    	}
				}
			}
			i--;
		}
		else {
			pla[i]++;
			if (pla[i] == v) {
				pla[i] = -1;
				i--;
			}
			else {
				flag = 1;
				while (flag != 0)
				{
					flag = 0;
					for (n = 0; n < i; n++)
					{
						if (pla[i] == pla[n]) {
							pla[i]++;
							flag = 1;
						}
					}
				}
				i++;
			}
		}
	}
	for (i = 0; i < f; i++)
	{
		aum[pac[i]] = i + 1;
	}
	printf("best = %d\n", max);
	for (i = v - 1; i >= 0; i--)
	{
		printf("%d", aum[i]);
	}

	return 0;
}
