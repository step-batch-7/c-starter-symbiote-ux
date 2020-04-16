#include<stdio.h>
#include<stdlib.h>
#include "even_filter.h"

int main() {
  Dynamic_Array * all_num = malloc(sizeof(Dynamic_Array));

  printf("Enter no of terms\n");
  scanf("%d",&all_num->length);

  all_num->list = malloc(sizeof(int) * all_num->length);

  for(int i = 0; i < all_num->length; i++) {
    scanf("%d",&all_num->list[i]);
  }

  Dynamic_Array * even_num = filter_even(all_num);
  printf("Even No :\n");
  for(int i = 0; i < even_num->length; i++) {
    printf("%d \n",even_num->list[i]);
  }
  free(even_num->list);
  free(even_num);
  free(all_num->list);
  free(all_num);
  return 0;
}