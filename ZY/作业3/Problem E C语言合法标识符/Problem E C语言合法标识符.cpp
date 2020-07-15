#include <iostream>

#include <cctype>

void out_put(int n);

int main (void)
{
    using namespace std;

    int i, n, flag;
    char ch;

    while(cin >> n)
    {
        cin.get();
        for(i = 0; i < n; i++)
        {
            flag = 0;
            cin.get(ch);
            if(!(!isdigit(ch)||ch == '_')){
                flag = 1;
            }
            while((ch = cin.get()) != '\n')
            {
                if(!(isalnum(ch)||ch == '_'))    flag = 1;
            }
            out_put(flag);
        }
    }

    return 0;
}

void out_put(int n)
{
    using namespace std;

    if(n == 0){
        cout << "yes"
             << endl;
    }
    else{
        cout << "no"
             << endl;
    }
}
