```c
//GCC

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

```

```c++
//G++

#include <iostream>

#include <cstdlib>

char *prit_month(int n);

int main (void)
{
    using namespace std;

    int n;
    char *month;

    while(cin >> n)
    {
        month = prit_month(n);
        cout << month
             << endl;
    }

    return 0;
}

char *prit_month(int n)
{
    using namespace std;

    char *month[12] = {(char *)"January", (char *)"February", (char *)"March", (char *)"April", (char *)"May", (char *)"June", (char *)"Junly", (char *)"August", (char *)"September", (char *)"October", (char *)"November", (char *)"December"};

    return month[n - 1];
}

```
