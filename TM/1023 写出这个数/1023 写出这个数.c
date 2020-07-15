#include <stdio.h>

#include <ctype.h>

#include <string.h>

void read(int n);

int main (void)
{
    int sum;
    char ch;

    sum = 0;
    while(isdigit(ch = getchar()))
    {
        sum += ch - 48;
    }
    read(sum);

    return 0;
}

void read(int n)
{
    int i;
    char str[4], ch;

    i = 0;
    while(n > 0||i == 0)
    {
        str[i] = (n % 10) + 48;
        n /= 10;
        i++;
    }
    str[i] = '\0';
    for(i = 0; i < strlen(str) / 2; i++)
    {
        ch = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = ch;
    }
    for(i = 0; i < strlen(str); i++)
    {
        if(i > 0)    printf(" ");
        switch(str[i])
        {

            case '0': printf("ling"); break;
            case '1': printf("yi"); break;
            case '2': printf("er"); break;
            case '3': printf("san"); break;
            case '4': printf("si"); break;
            case '5': printf("wu"); break;
            case '6': printf("liu"); break;
            case '7': printf("qi"); break;
            case '8': printf("ba"); break;
            case '9': printf("jiu"); break;
        }
    }
    printf("\n");
}
