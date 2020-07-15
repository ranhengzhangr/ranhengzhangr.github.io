```c
//GCC

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct node *insert(struct node *head, char ch[]);

struct node *build_list();

void print_list(struct node *head);

struct node{
	char vaule[21];
	struct node *next;
};

int main (void)
{
	struct node *head = NULL;

	head = build_list();
	print_list(head);

	return 0;
}

struct node *insert(struct node *head, char ch[])
{
	struct node *new_node, *prev, *cur;

	new_node = malloc(sizeof(struct node));
	strcpy(new_node->vaule, ch);
	for(prev = NULL, cur = head; cur != NULL&&strlen(ch) > strlen(cur->vaule); prev = cur, cur = cur->next);
	if(prev == NULL){
		new_node->next = head;
		head = new_node;
	}
	else{
		prev->next = new_node;
		new_node->next = cur;
	}

	return head;
}

struct node *build_list()
{
	char ch[21];
	struct node *head = NULL;

	while(scanf("%s", &ch) != EOF&&strcmp(ch, "#") != 0)
	{
		head = insert(head, ch);
	}

	return head;
}

void print_list(struct node *head)
{
	while(head->next != NULL)
	{
		printf("%s ", head->vaule);
		head = head->next;
	}
	printf("%s\n", head->vaule);
}

```

```c++
//G++

#include <iostream>

#include <cstdlib>

#include <cstring>

void insert(char *word[], char *prev, int n);

void print_word(char *word[], int n);

int main (void)
{
    using namespace std;

    int n;
    char *word[150], *prev;

    prev = new char[21];
    n = 0;
    while(cin >> prev&&strcmp(prev, "#") != 0)
    {
        insert(word, prev, n);
        n++;
    }
    print_word(word, n);

    return 0;
}

void insert(char *word[], char *prev, int n)
{
    using namespace std;

    int i, k;

    for(k = 0; k < n&&strlen(prev) > strlen(word[k]); k++);
    word[n] = new char[21];
    for(i = n; i > k; i--)
    {
        strcpy(word[i], word[i - 1]);
    }
    strcpy(word[k], prev);
}

void print_word(char *word[], int n)
{
    using namespace std;

    int i;

    for(i = 0; i < n; i++)
    {
        if(i > 0)    cout << " ";
        cout << word[i];
    }
}

```
