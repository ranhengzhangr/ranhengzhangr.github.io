```c
//GCC

#include <stdio.h>

#include <ctype.h>

int main (void)
{
    char ch;
    int se = 0;

    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        switch (ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': se += 1; break;
        }

    }
    printf ("%d\n", se);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cctype>

int main (void)
{
    using namespace std;

    int sum;
    char ch;

    sum = 0;
    while((ch = cin.get()) != '\n')
    {
        switch(tolower(ch))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': sum++; break;
            default : break;
        }
    }
    cout << sum
         << endl;

    return 0;
}

```
