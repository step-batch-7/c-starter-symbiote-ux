#include<stdio.h>
#include "list.h"

void search_number(List *list) {
  int value;
  printf("What number would you like to search for ? \n");
  scanf("%d",&value);
  while(value != END) {
    int index = search_num_pos(list,value);

    if(index == END) 
    printf("%d is not present in the list\n\n", value);
    else
    printf("%d is present in the list at position %d \n\n",value,index);
    
    printf("What number would you like to search for ? \n");
    scanf("%d",&value); 
  }
};

void save_numbers(List *list) {
  int value;
  printf("Enter a number\n");
  scanf("%d",&value);
  while(value != END) {
    insert_value(list,value);
    printf("Enter a number\n");
    scanf("%d",&value);
  }
};

int main(void) {
  List *list = create_list();
  save_numbers(list);
  search_number(list);
  free_list(list);
  return 0;
};



