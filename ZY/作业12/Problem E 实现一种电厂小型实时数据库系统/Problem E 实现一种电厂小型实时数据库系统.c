#include <stdio.h>

#include <string.h>

int main(void)
{
	int i, n, t, k, flag, sum_AI, sum_DI;
	float none;
	char stee[10], type[10], name[25];

	while(scanf("%d", &n) != EOF)
	{
        int DI[n];
        float AI[n];
        char expl_AI[n][25], expl_DI[n][25];
        for (i = 0, sum_AI = 0, sum_DI = 0; i < n; i++)
        {
            scanf("%s %s %s", &stee, &type, &name);
            if (type[0] == 'A') {
                for (t = 0, flag = -1; t < sum_AI&&flag == -1; t++)
                {
                    if (strcmp(name, expl_AI[t]) == 0) {
                        flag = t;
                    }
                }
                if (stee[0] == 'I') {
                    if (flag == -1) {
                        strcpy(expl_AI[sum_AI], name);
                        scanf("%f", &AI[sum_AI]);
                        sum_AI++;
                        printf("SUCCESSED\n");
                    }
                    else {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                }
                else if (stee[0] == 'Q') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        printf("%.3f\n", AI[flag]);
                    }
                }
                else if (stee[0] == 'M') {
                    if (flag == -1) {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        scanf("%f", &AI[flag]);
                        printf("SUCCESSED\n");
                    }
                }
                else if (stee[0] == 'D') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        for (k = flag; k < sum_AI; k++)
                        {
                            strcpy(expl_AI[k], expl_AI[k + 1]);
                            AI[k] = AI[k + 1];
                        }
                        sum_AI--;
                        printf("SUCCESSED\n");
                    }
                }
            }
            else {
                for (t = 0, flag = -1; t < sum_DI&&flag == -1; t++)
                {
                    if (strcmp(name, expl_DI[t]) == 0) {
                        flag = t;
                    }
                }
                if (stee[0] == 'I') {
                    if (flag == -1) {
                        strcpy(expl_DI[sum_DI], name);
                        scanf("%d", &DI[sum_DI]);
                        sum_DI++;
                        printf("SUCCESSED\n");
                    }
                    else {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                }
                else if (stee[0] == 'Q') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        printf("%d\n", DI[flag]);
                    }
                }
                else if (stee[0] == 'M') {
                    if (flag == -1) {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        scanf("%d", &DI[flag]);
                        printf("SUCCESSED\n");
                    }
                }
                else if (stee[0] == 'D') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        for (k = flag; k < sum_DI; k++)
                        {
                            strcpy(expl_DI[k], expl_DI[k + 1]);
                            DI[k] = DI[k + 1];
                        }
                        sum_DI--;
                        printf("SUCCESSED\n");
                    }
                }
            }
        }
	}

	return 0;
}
