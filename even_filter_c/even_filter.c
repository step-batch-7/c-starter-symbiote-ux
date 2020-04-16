#include<stdlib.h>
#include "even_filter.h"

Dynamic_Array * filter_even(int *numbers, unsigned length) {
  int list[length];
  Dynamic_Array * even_num = malloc(sizeof(Dynamic_Array));
  even_num->list = NULL;
  even_num->length = 0;
  for(int i = 0; i < length; i++) {
    if(!(numbers[i] % 2)) {
      list[even_num->length] = numbers[i];
      even_num->length++;
    }
  }
  even_num->list = malloc(sizeof(int) * even_num->length);
  for(int i = 0; i < even_num->length; i++) {
    even_num->list[i] = list[i];
  }
  return even_num;
}