#include<stdlib.h>
#include<stdio.h>
#include "list.h"

int search_num_pos(List *list, int num) {
  int count = 0;
  Node *p_walk = list->first;
   while(p_walk != NULL) {
     if(p_walk->value == num) return count;
     count++;
     p_walk = p_walk->next;
   }
   return END;
};

void free_list(List *list) {
  Node *p_walk = list->first;
  Node *element_to_free = NULL;
  while(p_walk != NULL) {
    element_to_free = p_walk;
    p_walk = p_walk->next;
    free(element_to_free);
  }
  free(list);
};

Node *create_node(int value) {
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
};

void insert_value(List *list, int value) {
  Node *new_node = create_node(value);
  if(list->first == NULL)
  list->first = new_node;
  else 
  list->last->next = new_node;
  list->last = new_node;
}

List *create_list() {
  List *list = malloc(sizeof(List));
  list->first = NULL;
  list->last = NULL;
  return list;
};