#include <stdio.h>

#include <stdlib.h>

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
    int n;
    struct node *first = NULL;

    first = build_list();
    print_list(first);
    scanf("%d", &n);
    if(search_list(first, n) == NULL){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    first = delete_from_list(first, n);
    print_list(first);

    return 0;
}

struct node *add_to_list(struct node *head, int n)
{
    struct node *new_node = NULL;

    new_node = malloc(sizeof(struct node));
    new_node->value = n;
    new_node->next = head;
    head = new_node;

    return head;
}

struct node *build_list()
{
    int n;
    struct node *head = NULL;

    while(scanf("%d", &n)&&n != -1)
    {
        head = add_to_list(head, n);
    }

    return head;
}

struct node *search_list(struct node *head, int n)
{
    struct node *p;

    for(p = head; p != NULL; p = p->next)
    {
        if(p->value == n)    break;
    }

    return p;
}

struct node *delete_from_list(struct node *head, int n)
{
    struct node *prev, *cur;

    for(cur = head, prev = NULL; cur != NULL&&cur->value != n; prev = cur, cur = cur->next);
    if(prev == NULL){
        head = head->next;
    }
    else if(cur != NULL){
        prev->next = cur->next;
        free(cur);
    }

    return head;
}

void print_list(struct node *head)
{
    while(head->next != NULL)
    {
        printf("%d,", head->value);
        head = head->next;
    }
    printf("%d\n", head->value);
}
