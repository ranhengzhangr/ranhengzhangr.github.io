```c
//GCC

#include <stdio.h>

char change(char ch);

int main (void)
{
    int i, len;
    char ch, wd[80];

    ch = getchar();
    for(len = 0; ch != '\n'; len++)
    {
        wd[len] = ch;
        ch = getchar();
    }
    for(i = 0; i < len; i++)
    {
        if(wd[i] >= 'A'&&wd[i] <= 'Z'){
            ch = change(wd[i]);
        }
        else{
            ch = wd[i];
        }
        putchar(ch);
    }

    return 0;
}

char change(char ch)
{
    switch(ch)
    {
        case 'A':return 'Z';
        case 'B':return 'Y';
        case 'C':return 'X';
        case 'D':return 'W';
        case 'E':return 'V';
        case 'F':return 'U';
        case 'G':return 'T';
        case 'H':return 'S';
        case 'I':return 'R';
        case 'J':return 'Q';
        case 'K':return 'P';
        case 'L':return 'O';
        case 'M':return 'N';
        case 'N':return 'M';
        case 'O':return 'L';
        case 'P':return 'K';
        case 'Q':return 'J';
        case 'R':return 'I';
        case 'S':return 'H';
        case 'T':return 'G';
        case 'U':return 'F';
        case 'V':return 'E';
        case 'W':return 'D';
        case 'X':return 'C';
        case 'Y':return 'B';
        case 'Z':return 'A';
    }
}

```

```c++
//G++

#include <iostream>

#include <cctype>

#include <cstring>

int main (void)
{
    using namespace std;

    int i;
    char str[81];

    cin.getline(str, 81, '\n');
    for(i = 0; i < strlen(str); i++)
    {
        if(isupper(str[i])){
            switch(str[i])
            {
                case 'A': str[i] = 'Z'; break;
                case 'B': str[i] = 'Y'; break;
                case 'C': str[i] = 'X'; break;
                case 'D': str[i] = 'W'; break;
                case 'E': str[i] = 'V'; break;
                case 'F': str[i] = 'U'; break;
                case 'G': str[i] = 'T'; break;
                case 'H': str[i] = 'S'; break;
                case 'I': str[i] = 'R'; break;
                case 'J': str[i] = 'Q'; break;
                case 'K': str[i] = 'P'; break;
                case 'L': str[i] = 'O'; break;
                case 'M': str[i] = 'N'; break;
                case 'N': str[i] = 'M'; break;
                case 'O': str[i] = 'L'; break;
                case 'P': str[i] = 'K'; break;
                case 'Q': str[i] = 'J'; break;
                case 'R': str[i] = 'I'; break;
                case 'S': str[i] = 'H'; break;
                case 'T': str[i] = 'G'; break;
                case 'U': str[i] = 'F'; break;
                case 'V': str[i] = 'E'; break;
                case 'W': str[i] = 'D'; break;
                case 'X': str[i] = 'C'; break;
                case 'Y': str[i] = 'B'; break;
                case 'Z': str[i] = 'A'; break;
            }
        }
    }
    cout << str
         << endl;

    return 0;
}

```
