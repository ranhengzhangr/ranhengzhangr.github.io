#include <stdio.h>

int main (void)
{
	int i, k, n, hh, mm, wait, mile, money;
	float run, pay;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d:%d %f %d", &hh, &mm, &run, &wait);
		mile = run * 1000;
		if(wait > 5)    wait -= 5;
		else    wait = 0;
		if(hh >= 6&&hh < 23){
			pay = 5.0;
			for(k = 2500; k <= mile; k += 500)
			{
				if(k <= 10000)    pay += 1.0;
				else    pay += 1.5;
			}
		}
		else{
			pay = 6.0;
			for(k = 2500; k <= mile; k += 500)    pay += 1.5;
		}
		money = pay + wait * 0.5 + 0.5;
		printf("%d\n", money);
	}

	return 0;
}
