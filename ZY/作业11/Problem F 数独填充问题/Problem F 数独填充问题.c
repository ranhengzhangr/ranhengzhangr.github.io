#include <stdio.h>

void judge(char ch, char num[], int pla[]);

void judge(char ch, char num[], int pla[])
{
    int i;

    for(i = 0; i < 4; i++)
    {
        if(ch == num[i]){
            pla[i] = 1;
        }
    }
}

int main (void)
{
    int pla[4], i, t,  n, x, y, ix, iy, t0, sum, flag;
    char num[4] = {'1', '2', '3', '4'};

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        char sud[4][5];

        getchar();
        for(t = 0; t < 4; t++)
        {
            gets(sud[t]);
        }
        flag = 1;
        while(flag != 0)
        {
            flag = 0;
            for(x = 0; x < 4; x++)
            {
                for(y = 0; y < 4; y++)
                {
                    if(sud[x][y] == '*'){
                        flag++;
                        pla[0] = 0, pla[1] = 0, pla[2] = 0, pla[3] = 0;
                        for(ix = x, iy = 0; iy < 4; iy++)
                        {
                            judge(sud[ix][iy], num, pla);
                        }
                        for(ix = 0, iy = y; ix < 4; ix++)
                        {
                            judge(sud[ix][iy], num, pla);
                        }
                        if(x < 2){
                            if(y < 2){
                                for(ix = 0; ix < 2; ix++)
                                {
                                    for(iy = 0; iy < 2; iy++)
                                    {
                                        judge(sud[ix][iy], num, pla);
                                    }
                                }
                            }
                            else{
                                for(ix = 0; ix < 2; ix++)
                                {
                                    for(iy = 0; iy < 2; iy++)
                                    {
                                        judge(sud[ix][iy + 2], num, pla);
                                    }
                                }
                            }
                        }
                        else{
                            if(y < 2){
                                for(ix = 0; ix < 2; ix++)
                                {
                                    for(iy = 0; iy < 2; iy++)
                                    {
                                        judge(sud[ix + 2][iy], num, pla);
                                    }
                                }
                            }
                            else{
                                for(ix = 0; ix < 2; ix++)
                                {
                                    for(iy = 0; iy < 2; iy++)
                                    {
                                        judge(sud[ix + 2][iy + 2], num, pla);
                                    }
                                }
                            }
                        }
                        for(t = 0, sum = 0; t < 4; t++)
                        {
                            if(pla[t] == 0){
                                sum++;
                                t0 = t;
                            }
                        }
                        if(sum == 1){
                            sud[x][y] = num[t0];
                            flag--;
                        }
                    }
                }
            }
        }
        if(i > 0){
            printf("\n");
        }
        printf("Case #%d:\n", i + 1);
        for(t = 0; t < 4; t++)
        {
            printf("%s\n", sud[t]);
        }
    }

    return 0;
}
