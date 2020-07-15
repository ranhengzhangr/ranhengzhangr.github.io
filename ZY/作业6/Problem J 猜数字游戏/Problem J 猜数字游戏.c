#include <stdio.h>

int judge(int r, int i, int n);

int main (void)
{
    int i, n, r, t, u, flag = 0;

    scanf("%d %d", &n, &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &r);
        if(flag == 0){
            flag = judge(r, i, n);
        }
    }
    if(flag == 0){
        printf("Game Over\n");
    }

    return 0;
}

int judge(int r, int i, int n)
{
    if(r < 0){
        printf("Game Over\n");
        return 1;
    }
    else{
        if(r < n){
            printf("Too small\n");
            return 0;
        }
        else{
            if(r > n){
                printf("Too big\n");
                return 0;
            }
            else{
                if(i == 0){
                    printf("Bingo!\n");
                    return 1;
                }
                else{
                    if(i < 3){
                        printf("Lucky You!\n");
                        return 1;
                    }
                    else{
                        printf("Good Guess!\n");
                        return 1;
                    }
                }
            }
        }
    }
}
