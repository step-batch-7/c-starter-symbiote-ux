#include<stdio.h>
#include "even_filter.h"

int main() {
  int numbers[] = {1,2,3,4,5,6,7,8,9,10,-2,0,-1};
  Array even_num = filter_even(numbers, LENGTH);
  for(int i = 0; i < even_num.length; i++) {
    printf("%d \n",even_num.list[i]);
  }
  return 0;
}