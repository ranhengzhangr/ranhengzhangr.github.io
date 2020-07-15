```c
//GCC

#include <stdio.h>

struct fraction{
    int sign;
    int upper;
    int lower;
};

void show(struct fraction n);

void reduce(struct fraction *n);

int read(struct fraction *x, struct fraction *y);

int main (void)
{
    struct fraction a, b, c;

    while(read(&a, &b) != EOF)
    {
        c.lower = a.lower * b.lower;
        c.upper = a.sign * a.upper * b.lower + b.sign * b.upper * a.lower;
        c.sign = 0;
        reduce(&c);
        show(a);
        printf(" + ");
        show(b);
        printf(" = ");
        show(c);
        printf("\n");
        c.lower = a.lower * b.lower;
        c.upper = a.sign * a.upper * b.lower - b.sign * b.upper * a.lower;
        c.sign = 0;
        reduce(&c);
        show(a);
        printf(" - ");
        show(b);
        printf(" = ");
        show(c);
        printf("\n");
        c.lower = a.lower * b.lower;
        c.upper = a.upper * b.upper;
        c.sign = a.sign * b.sign;
        reduce(&c);
        show(a);
        printf(" * ");
        show(b);
        printf(" = ");
        show(c);
        printf("\n");
        c.lower = a.lower * b.upper;
        c.upper = a.upper * b.lower;
        c.sign = a.sign * b.sign;
        if(c.lower != 0)    reduce(&c);
        show(a);
        printf(" / ");
        show(b);
        printf(" = ");
        if(c.lower != 0){
            show(c);
        }
        else{
            printf("Inf");
        }
        printf("\n");
    }

    return 0;
}

void show(struct fraction n)
{
    if(n.sign == -1){
        printf("(");
    }
    if(n.upper >= n.lower){
        n.upper *= n.sign;
        printf("%d", n.upper / n.lower);
        n.upper %= n.lower;
        n.upper *= n.sign;
        if(n.upper != 0){
            printf(" ");
            printf("%d/%d", n.upper, n.lower);
        }
    }
    else{
        n.upper *= n.sign;
        printf("%d", n.upper);
        if(n.upper != 0){
            printf("/%d", n.lower);
        }
    }
    if(n.sign == -1){
        printf(")");
    }
}

void reduce(struct fraction *n)
{
    int a, b;

    if(n->upper < 0&&n->sign == 0){
        n->sign = -1;
        n->upper = -n->upper;
    }
    else if(n->sign == 0){
        n->sign = 1;
    }
    if(n->upper > n->lower){
        a = n->upper;
        b = n->lower;
    }
    else{
        a = n->lower;
        b = n->upper;
    }
    if(b == 0)    a = 1;
    while(b > 0)
    {
        a %= b;
        if(a < b){
            a += b;
            b = a - b;
        }
    }
    n->upper /= a;
    n->lower /= a;
}

int read(struct fraction *x, struct fraction *y)
{
    if(scanf("%d", &x->upper) == EOF)    return EOF;
    scanf("/%d %d/%d", &x->lower, &y->upper, &y->lower);
    x->sign = 0;
    y->sign = 0;
    reduce(x);
    reduce(y);

    return 0;
}

```

```c++
//G++

#include <iostream>

struct fraction{
    int signa;
    int upper;
    int lower;
};

void addit(struct fraction a, struct fraction b);

void subtr(struct fraction a, struct fraction b);

void multi(struct fraction a, struct fraction b);

void divis(struct fraction a, struct fraction b);

void show(struct fraction n);

void reduce(struct fraction *n);

int read(struct fraction *n);

int main (void)
{
    using namespace std;

    struct fraction a, b;

    while(read(&a) != EOF)
    {
        read(&b);
        addit(a, b);
        subtr(a, b);
        multi(a, b);
        divis(a, b);
    }

    return 0;
}

void addit(struct fraction a, struct fraction b)
{
    using namespace std;

    struct fraction n;

    n.lower = a.lower * b.lower;
    n.upper = a.signa * a.upper * b.lower + b.signa * b.upper * a.lower;
    n.signa = 0;
    reduce(&n);
    show(a);
    cout << " + ";
    show(b);
    cout << " = ";
    show(n);
    cout << endl;
}

void subtr(struct fraction a, struct fraction b)
{
    using namespace std;

    struct fraction n;

    n.lower = a.lower * b.lower;
    n.upper = a.signa * a.upper * b.lower - b.signa * b.upper * a.lower;
    n.signa = 0;
    reduce(&n);
    show(a);
    cout << " - ";
    show(b);
    cout << " = ";
    show(n);
    cout << endl;
}

void multi(struct fraction a, struct fraction b)
{
    using namespace std;

    struct fraction n;

    n.lower = a.lower * b.lower;
    n.upper = a.upper * b.upper;
    n.signa = a.signa * b.signa;
    reduce(&n);
    show(a);
    cout << " * ";
    show(b);
    cout << " = ";
    show(n);
    cout << endl;
}

void divis(struct fraction a, struct fraction b)
{
    using namespace std;

    struct fraction n;

    n.lower = a.lower * b.upper;
    n.upper = a.upper * b.lower;
    n.signa = a.signa * b.signa;
    reduce(&n);
    show(a);
    cout << " / ";
    show(b);
    cout << " = ";
    if(n.lower == 0){
        cout << "Inf";
    }
    else{
        show(n);
    }
    cout << endl;
}

void show(struct fraction n)
{
    using namespace std;

    if(n.signa == -1){
        cout << "(-";
    }
    if(n.upper > n.lower){
        cout << n.upper / n.lower;
        n.upper %= n.lower;
        if(n.upper != 0){
            cout << " "
                 << n.upper
                 << "/"
                 << n.lower;
        }
    }
    else{
        cout << n.upper;
        if(n.upper != 0){
            cout << "/"
                 << n.lower;
        }
    }
    if(n.signa == -1){
        cout << ")";
    }
}

void reduce(struct fraction *n)
{
    using namespace std;

    int a, b;

    if(n->signa == 0){
        if(n->upper < 0)    n->signa = -1;
        else    n->signa = 1;
        n->upper *= n->signa;
    }
    if(n->upper > n->lower){
        a = n->upper;
        b = n->lower;
    }
    else{
        a = n->lower;
        b = n->upper;
    }
    if(b == 0)    a = 1;
    while(b > 0)
    {
        a %= b;
        if(a < b){
            a += b;
            b = a - b;
            a -= b;
        }
    }
    n->upper /= a;
    n->lower /= a;
}

int read(struct fraction *n)
{
    using namespace std;

    if(!(cin >> n->upper))    return EOF;
    cin.get();
    cin >> n->lower;
    n->signa = 0;
    reduce(n);

    return 0;
}

```
