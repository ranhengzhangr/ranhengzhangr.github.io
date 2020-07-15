#include <stdio.h>

int main (void)
{
    int i, in1, in2, in3, in4, sum, year;

    while (scanf("%d", &year) != EOF )
    {
        if(year == 0){
            ;
        }
        else{
            in1 = 0, in2 = 0, in3 = 0, in4 = 1, sum = 0;
            for(i = 1; i < year; i++)
            {
                in4 += in3, in3 = in2, in2 = in1, in1 = in4;
            }
            sum = in1 + in2 + in3 + in4;
            printf("%d\n", sum);
        }
    }

    return 0;
}
