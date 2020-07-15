#include <iostream>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, k, flag, len_num, len_sig, num[100];
    char ch, sig[100];


    len_num = 0;
    len_sig = 0;
    while((ch = cin.get()) != '\n')
    {
        if(isdigit(ch)){
            num[len_num] = ch - 48;
            len_num++;
        }
        else{
            sig[len_sig] = ch;
            len_sig++;
        }
    }
    for(i = 0; i < (len_sig - 1) / 2; i++)
    {
        ch = sig[i], sig[i] = sig[len_sig - i - 2], sig[len_sig - i - 2] = ch;
    }
    flag = 1;
    while(flag == 1)
    {
        flag = 0;
        for(i = 0; i < len_sig; i++)
        {
            if(sig[i] == '*'||sig[i] == '/'){
                flag = 1;
                if(sig[i] == '*'){
                    num[i] *= num[i + 1];
                    len_num--;
                    for(k = i + 1; k < len_num; k++)
                    {
                        num[k] = num[k + 1];
                    }
                    for(k = i; k < len_sig; k++)
                    {
                        sig[k] = sig[k + 1];
                    }
                }
                else{
                    num[i] /= num[i + 1];
                    len_num--;
                    for(k = i + 1; k < len_num; k++)
                    {
                        num[k] = num[k + 1];
                    }
                    for(k = i; k < len_sig; k++)
                    {
                        sig[k] = sig[k + 1];
                    }
                }
                break;
            }
        }
    }
    for(i = 0; i < len_sig; i++)
    {
        if(sig[i] == '+')    num[i + 1] += num[i];
        else    num[i + 1] = num[i] - num[i + 1];
    }
    cout << num[len_num - 1]
         << endl;

    return 0;
}
