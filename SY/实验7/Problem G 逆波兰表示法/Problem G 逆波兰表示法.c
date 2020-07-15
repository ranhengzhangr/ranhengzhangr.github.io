#include <stdio.h>

#include <stdlib.h>

#define N 100

int a[N];
int t;

void s()
{
   t = -1;
}

int e()
{
   return t == -1;
}

int f()
{
   return t == N - 1;
}

void p(int i)
{
   if (f()) exit(1);
   else a[++t] = i;
}

int o()
{
   if (e()) exit(1);
   else return a[t--];
}


int main()
{
    int ch;
    int a, b;
    s();
    while ((ch = getchar()) != '\n')
    {
       if (ch >= '0' && ch <='9')
       {
          ch = ch - '0';
          p(ch);
       }
       else if (ch == '+')
       {
          b = o();
          a = o();
          p(a + b);
       }
       else if (ch == '-')
       {
          b = o();
          a = o();
          p(a - b);
       }
       else if (ch == '*')
       {
          b = o();
          a = o();
          p(a * b);
       }
       else if (ch == '/')
       {
          b = o();
          a = o();
          p(a / b);
       }
       else
       {
          a = o();
          printf("%d\n", a);
       }
    }
   return 0;
}
