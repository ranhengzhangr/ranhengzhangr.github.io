#include <stdio.h>

#include <string.h>

#include <ctype.h>

struct key{
    char button;
    int state;
    int times;
};

int main(void)
{
    int i, k, be, af;
    char before[81], after[91];
    struct key space = {'_', 1, 0}, number[10], alphabet[26];

    for(i = 0; i < 10; i++)
    {
        number[i].button = 48 + i;
        number[i].state = 1;
        number[i].times = 0;
    }
    for(i = 0; i < 26; i++)
    {
        alphabet[i].button = 65 + i;
        alphabet[i].state = 1;
        alphabet[i].times = 0;
    }
    gets(before);
    gets(after);
    for(be = 0, i = 0, k = 0; be < strlen(before); be++)
    {
        if(before[be] == '_'&&space.times == 0){
            space.state = 0;
            for(af = 0; af < strlen(after); af++)
            {
                if(after[af] == '_'){
                    space.state = 1;
                    break;
                }
            }
            space.times = 1;
            if(space.state == 0)    putchar('_');
        }
        else if(isdigit(before[be])&&number[before[be] - 48].times == 0){
            number[before[be] - 48].state = 0;
            for(af = 0; af < strlen(after); af++)
            {
                if(before[be] == after[af]){
                    number[before[be] - 48].state = 1;
                    break;
                }
            }
            number[before[be] - 48].times = 1;
            if(number[before[be] - 48].state == 0)    putchar(number[before[be] - 48].button);
        }
        else if(isalpha(before[be])&&alphabet[toupper(before[be]) - 65].times == 0){
            alphabet[toupper(before[be]) - 65].state = 0;
            for(af = 0; af < strlen(after); af++)
            {
                if(toupper(after[af]) == toupper(before[be])){
                    alphabet[toupper(before[be]) - 65].state = 1;
                    break;
                }
            }
            alphabet[toupper(before[be]) - 65].times = 1;
            if(alphabet[toupper(before[be]) - 65].state == 0)    putchar(alphabet[toupper(before[be]) - 65].button);
        }
    }
    printf("\n");

    return 0;
}
