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
