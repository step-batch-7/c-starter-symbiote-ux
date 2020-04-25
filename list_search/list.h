#ifndef _LIST_H_
#define _LIST_H_

#define END -99

typedef struct node {
  int value;
  struct node *next;
} Node;

typedef struct {
  Node *first;
  Node *last;
} List;

int search_num_pos(List *, int);
void free_list(List *);
Node *create_node(int);
void insert_value(List *, int);
List *create_list();
#endif
