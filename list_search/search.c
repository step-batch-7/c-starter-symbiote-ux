#include<stdio.h>
#include "list.h"

void search_number(List *list) {
  int value;
  printf("What number would you like to search for ? \n");
  scanf("%d",&value);
  while(value != END) {
    int index = search_num_pos(list,value);
    if(index == END) 
    Print_Num_Absent(value);
    else
    Print_Num_Present(value,index);
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



