#include<stdlib.h>
#include "even_filter.h"

Dynamic_Array * filter_even(Dynamic_Array *all_num) {
  int list[all_num->length];
  Dynamic_Array * even_num = malloc(sizeof(Dynamic_Array));
  even_num->list = NULL;
  even_num->length = 0;
  for(int i = 0; i < all_num->length; i++) {
    if(!(all_num->list[i] % 2)) {
      list[even_num->length] = all_num->list[i];
      even_num->length++;
    }
  }
  even_num->list = malloc(sizeof(int) * even_num->length);
  for(int i = 0; i < even_num->length; i++) {
    even_num->list[i] = list[i];
  }
  return even_num;
}