#include <stdio.h>

#include <string.h>

void read(char ch);

int main (void)
{
    int i, len;
    char ch[8];

    gets(ch);
    len = strlen(ch);
    for(i = 0; i < len; i++)
    {
        if(i > 0){
            printf(" ");
        }
        read(ch[i]);
    }
    printf("\n");

    return 0;
}

void read(char ch)
{
    switch(ch)
    {
        case '-': printf("fu"); break;
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
