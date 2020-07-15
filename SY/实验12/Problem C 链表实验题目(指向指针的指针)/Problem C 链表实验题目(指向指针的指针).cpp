#include <iostream>

#include <cstdlib>

struct node{
    int value;
    struct node *next;
};

void add_to_list(struct node **head, int n);

struct node *build_list();

struct node *search_list(struct node *head, int n);

void delete_from_list(struct node **head, int n);

void print_list(struct node *head);

int main (void)
{
    using namespace std;

    int n;
    struct node *first = NULL;

    first = build_list();
    print_list(first);
    cin >> n;
    if(search_list(first, n) == NULL){
        cout << "NO"
             << endl;
    }
    else{
        cout << "YES"
             << endl;
    }
    delete_from_list(&first, n);
    print_list(first);

    return 0;
}

void add_to_list(struct node **head, int n)
{
    using namespace std;

    struct node *new_node;

    new_node = new struct node;
    new_node->value = n;
    new_node->next = *head;
    *head = new_node;
}

struct node *build_list()
{
    using namespace std;

    int n;
    struct node *head = nullptr;

    while(cin >> n&&n != -1)
    {
        add_to_list(&head, n);
    }

    return head;
}

struct node *search_list(struct node *head, int n)
{
    using namespace std;

    struct node *p;

    for(p = head; p != nullptr&&p->value != n; p = p->next);

    return p;
}

void delete_from_list(struct node **head, int n)
{
    using namespace std;

    struct node *prev, *cur;

    for(prev = nullptr, cur = *head; cur != nullptr&&cur->value != n; prev = cur, cur = cur->next);
    if(prev == nullptr){
        cur = cur->next;
    }
    else{
        prev->next = cur->next;
    }
    delete(cur);
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
