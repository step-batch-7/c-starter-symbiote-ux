#include<stdio.h>
#include "list.h"

int main(void) {
  List *list = create_list();
  save_numbers(list);
  search_number(list);
  free_list(list);
  return 0;
}



