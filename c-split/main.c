#include "split_string.h"

int main(void) {
  char str[] = "student",separator = 'u';
  unsigned int length = sizeof(str)/sizeof(str[0]);
  Strings_Array *splitted_string =  split_string(str,separator,length);
  print_splitted_string(splitted_string);
  free_pointers(splitted_string);
  return 0;
};