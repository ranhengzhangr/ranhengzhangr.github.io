```c
//GCC

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

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, min, RMB, hour, wait;
    float pail, mile, lenth;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> hour;
        cin.get();
        cin >> min
            >> lenth
            >> wait;
        if(wait > 5)    wait -= 5;
        else    wait = 0;
        if(hour >= 6&&hour < 23){
            pail = 5;
            for(mile = 2.5; mile <= lenth; mile += 0.5)
            {
                if(mile <= 10)    pail += 1;
                else    pail += 1.5;
            }
        }
        else{
            pail = 6;
            for(mile = 2.5; mile <= lenth; mile += 0.5)    pail += 1.5;
        }
        RMB = pail + (wait + 1) * 0.5;
        cout << RMB
             << endl;
    }

    return 0;
}

```
