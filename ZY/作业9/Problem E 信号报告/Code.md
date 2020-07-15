```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, r, s;

    scanf("%d", &n);
    if(n >= 11&&n <= 59){
        r = n / 10;
        s = n % 10;
        switch(s)
        {
            case 1:printf("Faint signals, barely perceptible, ");break;
            case 2:printf("Very weak signals, ");break;
            case 3:printf("Weak signals, ");break;
            case 4:printf("Fair signals, ");break;
            case 5:printf("Fairly good signals, ");break;
            case 6:printf("Good signals, ");break;
            case 7:printf("Moderately strong signals, ");break;
            case 8:printf("Strong signals, ");break;
            case 9:printf("Extremely strong signals, ");break;
        }
        switch(r)
        {
            case 1:printf("unreadable.\n");break;
            case 2:printf("barely readable, occasional words distinguishable.\n");break;
            case 3:printf("readable with considerable difficulty.\n");break;
            case 4:printf("readable with practically no difficulty.\n");break;
            case 5:printf("perfectly readable.\n");break;
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    char ch_R, ch_S;

    cin.get(ch_R);
    cin.get(ch_S);
    switch(ch_S)
    {
        case '1': cout << "Faint signals, barely perceptible"; break;
        case '2': cout << "Very weak signals"; break;
        case '3': cout << "Weak signals"; break;
        case '4': cout << "Fair signals"; break;
        case '5': cout << "Fairly good signals"; break;
        case '6': cout << "Good signals"; break;
        case '7': cout << "Moderately strong signals"; break;
        case '8': cout << "Strong signals"; break;
        case '9': cout << "Extremely strong signals"; break;
    }
    cout << ", ";
    switch(ch_R)
    {
        case '1': cout << "unreadable"; break;
        case '2': cout << "barely readable, occasional words distinguishable"; break;
        case '3': cout << "readable with considerable difficulty"; break;
        case '4': cout << "readable with practically no difficulty"; break;
        case '5': cout << "perfectly readable"; break;
    }
    cout << "."
         << endl;

    return 0;
}

```
