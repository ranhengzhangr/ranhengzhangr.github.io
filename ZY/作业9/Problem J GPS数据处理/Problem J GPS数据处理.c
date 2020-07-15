#include <stdio.h>

#include <string.h>

void put_out_time(int n);

int main (void)
{
    int i, n, u, r, hr, min, sec, len;
    char ch[200];

    while(scanf("%s", &ch) != EOF&&(ch[0] != 'E'&&ch[1] != 'N'&&ch[2] != 'D'))
    {
        u = 0;
        len = strlen(ch);
        for(i = 0; i < len&&u == 0; i++)
        {
            if(ch[i] == '$'){
                for(; i < len&&u == 0; i++)
                {
                    if(ch[i] == ','){
                        n = (ch[i + 1] - 48) * 100000 + (ch[i + 2] - 48) * 10000 + (ch[i + 3] - 48) * 1000+ (ch[i + 4] - 48) * 100+ (ch[i + 5] - 48) * 10+ (ch[i + 6] - 48);
                        sec = n % 100;
                        n /= 100;
                        min = n % 100;
                        hr = n / 100;
                        hr += 8;
                        if(hr > 23){
                            hr -= 24;
                        }
                        put_out_time(hr);
                        printf(":");
                        put_out_time(min);
                        printf(":");
                        put_out_time(sec);
                        printf("\n");
                        u = 1;
                    }
                }
            }
        }
    }

    return 0;
}

void put_out_time(int n)
{
    if(n < 10){
        printf("0");
    }
    printf("%d", n);
}
