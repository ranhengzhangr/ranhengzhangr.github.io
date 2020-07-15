#include <stdio.h>

#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node *insert(struct node *head, int n);

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

struct node *insert(struct node *head, int n)
{
    struct node *prev = NULL, *adr, *new_node;

    new_node = malloc(sizeof(struct node));
    new_node->value = n;
    for(adr = head; adr != NULL; prev = adr, adr = adr->next)
    {
        if(adr->value >= n)    break;
    }
    if(prev == NULL){
        head = new_node;
    }
    else{
        prev->next = new_node;
    }
    new_node->next = adr;

    return head;
}

struct node *build_list()
{
    int n;
    struct node *head = NULL;

    while(scanf("%d", &n)&&n != -1)
    {
        head = insert(head, n);
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
