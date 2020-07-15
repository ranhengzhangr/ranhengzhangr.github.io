#include <stdio.h>

int main (void)
{
	int n;
	char *ch[12] = {"January", "February", "March", "April", "May", "June", "Junly", "August", "September", "October", "November", "December"};

	while(scanf("%d", &n) != EOF)
	{
		printf("%s\n", ch[n - 1]);
	}

	return 0;
}
