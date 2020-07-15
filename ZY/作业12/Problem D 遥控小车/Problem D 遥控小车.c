#include <stdio.h>

int main (void)
{
    int i, n, t, x, y, v, flag;
    char ch, dec;

    while(scanf("%d", &n) != EOF&&n != 0)
    {
        v = 0, x = 0, y = 0, flag = 1, dec = 'U';
        for(i = 0; i < n; i++)
        {
            scanf("%d", &t);
            while(v < t)
            {
                switch(dec)
                {
                    case 'U': y += flag; break;
                    case 'D': y -= flag; break;
                    case 'L': x -= flag; break;
                    case 'R': x += flag; break;
                }
                v++;
            }
            if(x < 0||x > 50){
                if(x < 0){
                    x = 0;
                }
                else{
                    x = 50;
                }
            }
            if(y < 0||y > 50){
                if(y < 0){
                    y = 0;
                }
                else{
                    y = 50;
                }
            }
            getchar();
            ch = getchar();
            if(ch == 'A'){
                flag = 3 - flag;
            }
            else{
                dec = ch;
            }
        }
        while(v < 50)
        {
            switch(dec)
            {
                case 'U': y += flag; break;
                case 'D': y -= flag; break;
                case 'L': x -= flag; break;
                case 'R': x += flag; break;
            }
            v++;
        }
        if(x < 0||x > 50){
            if(x < 0){
                x = 0;
            }
            else{
                x = 50;
            }
        }
        if(y < 0||y > 50){
            if(y < 0){
                y = 0;
            }
            else{
                y = 50;
            }
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}
