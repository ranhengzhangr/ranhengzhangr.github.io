#include <iostream>

#include <cstdlib>

struct node{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *head, int n);

struct node *build_list();

struct node *search_list(struct node *head, int n);

struct node *delete_from_list(struct node *head, int n);

void print_list(struct node *head);

int main (void)
{
    using namespace std;

    int n;
    struct node *first = nullptr;

    first = build_list();
    print_list(first);
    cin >> n;
    if(search_list(first, n) == nullptr){
        cout << "NO"
             << endl;
    }
    else{
        cout << "YES"
             << endl;
    }
    first = delete_from_list(first, n);
    print_list(first);

    return 0;
}

struct node *add_to_list(struct node *head, int n)
{
    using namespace std;

    struct node *new_node = nullptr;

    new_node = new struct node;

    new_node->value = n;
    new_node->next = head;
    head = new_node;

    return head;
}

struct node *build_list()
{
    using namespace std;

    int n;
    struct node *head = nullptr;

    while(cin >> n&&n != -1)
    {
        head = add_to_list(head, n);
    }

    return head;
}

struct node *search_list(struct node *head, int n)
{
    using namespace std;

    struct node *p;

    for(p = head; p != nullptr & p->value != n; p = p->next);

    return p;
}

struct node *delete_from_list(struct node *head, int n)
{
    using namespace std;

    struct node *prev, *cur;

    for(prev = nullptr, cur = head; cur != nullptr&&cur->value != n; prev = cur, cur = cur->next);
    if(prev == nullptr){
        head = head->next;
    }
    else{
        prev->next = cur->next;
    }
    delete(cur);

    return head;
}

void print_list(struct node *head)
{
    using namespace std;

    while(head->next != nullptr)
    {
        cout << head->value
             << ",";
        head = head->next;
    }
    cout << head->value
         << endl;
}
