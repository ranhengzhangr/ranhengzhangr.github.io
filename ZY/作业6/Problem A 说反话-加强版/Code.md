```c
//GCC

#include <stdio.h>

#include <string.h>

int main (void)
{
    int i1, i2, len;
    char ch[1000], ur;

    gets(ch);
    len = strlen(ch);
    for(i1 = len; i1 > 0; i1--)
    {
        if(ch[i1] == ' '&&ch[i1 + 1] != ' '){
            i2 = i1 + 1;
            while(ch[i2] != ' '&&ch[i2] != '\0' )
            {
                putchar(ch[i2]);
                i2++;
            }
            printf(" ");
        }
    }
    while(ch[i1] != ' '&&ch[i1] != '\0' )
    {
        putchar(ch[i1]);
        i1++;
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

#include <string>

void revstr(char str[], int a, int b);

int main(void)
{
	using namespace std;

	int i, a, b, flag;
	char ch, str[1000], space[2], fac[100];

	i = 0;
	while((ch = cin.get()) != '\n')
    {
        if(ch == ' '){
            str[i] = ch;
            i++;
            while((ch = cin.get()) == ' ');
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
	flag = 0;
	a = -1;
	b = -2;
	for (i = 0; i < strlen(str); i++)
	{
		if (flag == 0 && str[i] != ' ') {
			a = i;
			flag = 1;
		}
		if (flag == 1 && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
			b = i;
			i++;
			flag = 0;
			revstr(str, a, b);
		}
	}
	revstr(str, 0, strlen(str) - 1);
	cout << str
		<< endl;

	return 0;
}

void revstr(char str[], int a, int b)
{
	using namespace std;

	int i;
	char ch;

	for (i = a; i <= (a + b) / 2; i++)
	{
		ch = str[i];
		str[i] = str[b - (i - a)];
		str[b - (i - a)] = ch;
	}
}

```
