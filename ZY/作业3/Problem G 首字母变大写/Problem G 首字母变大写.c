#include <stdio.h>

#include <ctype.h>

void up_code();

int main (void)
{
    char ch;

    while((ch = getchar()) != EOF )
    {
        printf("%c", ch = toupper(ch));
        while((ch = getchar()) != '\n' )
        {
            if(ch == ' '){
                printf("%c", ch);
                up_code();
            }
            else{
                printf("%c", ch);
            }
        }
        printf("\n");
    }

    return 0;
}

void up_code()
{
    int ch;

    ch = getchar();
    printf("%c", ch = toupper(ch));
}
