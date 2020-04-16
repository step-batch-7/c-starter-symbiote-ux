#include<stdio.h>
#include<stdlib.h>
#include "even_filter.h"

int main() {
  int *numbers;
  unsigned no_of_terms;
  printf("Enter no of terms\n");
  scanf("%d",&no_of_terms);
  numbers = malloc(sizeof(int) * no_of_terms);
  for(int i = 0; i < no_of_terms; i++) {
    scanf("%d",&numbers[i]);
  }
  Dynamic_Array * even_num = filter_even(numbers, no_of_terms);
  printf("Even No :\n");
  for(int i = 0; i < even_num->length; i++) {
    printf("%d \n",even_num->list[i]);
  }
  return 0;
}