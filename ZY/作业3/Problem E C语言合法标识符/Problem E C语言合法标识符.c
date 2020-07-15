#include <stdio.h>

void out_true();

void out_false();

void fet_dis();

void fet_val();

int main (void)
{
    int n;

    while(scanf("%d\n", &n) != EOF )
    {
        int i;

        for(i = 0; i < n; i++)
        {
            int c;

            c = getchar();
            if(c == 95||(c > 64&&c < 91)||(c > 96&&c < 123)){
                fet_val();
            }
            else{
                fet_dis();
                out_false();
            }
        }
    }

    return 0;
}

void out_true()
{
    printf("yes\n");
}

void out_false()
{
    printf("no\n");
}

void fet_dis()
{
    int c;

    while((c = getchar()) != 10)
    {
        ;
    }
}

void fet_val()
{
    int c, t = 0;

    while((c = getchar()) != '\n')
    {
        if(c == 95||(c > 64&&c < 91)||(c > 96&&c < 123)||(c > 47&&c < 58)){
            ;
        }
        else{
            t++;
            out_false();
            fet_dis();
            break;
        }
    }
    if(t == 0){
        out_true();
    }
    else{
        ;
    }
}
