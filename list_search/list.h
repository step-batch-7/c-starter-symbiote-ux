#ifndef _LIST_H_
#define _LIST_H_

#define Print_Num_Present printf("%d is present in the list at position %d \n\n",value,search_num_pos(list,value));
#define Print_Num_Absent printf("%d is not present in the list\n\n", value)

typedef struct node {
  int value;
  struct node *next;
} Node;

typedef struct {
  Node *first;
  Node *last;
} List;

void save_numbers(List *);
void search_number(List *);
int search_num_pos(List *, int);
void free_list(List *);
Node *create_node(int);
void insert_value(List *, int);
List *create_list();
#endif
