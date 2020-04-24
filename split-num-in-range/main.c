#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef unsigned int Int;

typedef struct {
  int *array;
  unsigned int length;
} Sub_List;

typedef Sub_List *List;

void display_numbers_list(List *numbers_list) {
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < numbers_list[i]->length; j++) {
      printf("%d ",numbers_list[i]->array[j]);
    }
    printf("\n");
  }
};

Sub_List *get_sub_list(int *list, Int from, Int till, Int length) {
  Sub_List *numbers = malloc(sizeof(Sub_List));
  numbers->array = malloc(sizeof(int) * length);
  numbers->length = 0;

  for(int i = 0; i < length; i++) {
    if(list[i] >= from && list[i] <= till) {
     numbers->array[numbers->length] = list[i];
     numbers->length++;
    }
  }
    Sub_List *sub_list = malloc(sizeof(Sub_List));
    sub_list->array = malloc(sizeof(int) * numbers->length);
    for(int j = 0; j < numbers->length; j++) {
      sub_list->array[j]= numbers->array[j];
    }
    sub_list->length = numbers->length;
    free(numbers);
    return sub_list;
};

List * split_in_range(int *list,Int from, Int till, Int length) {
  List *result = malloc(sizeof(Sub_List *) * 3);
  result[0] = get_sub_list(list,0,from - 1,length);
  result[1] = get_sub_list(list,from,till,length);
  result[2] = get_sub_list(list,till + 1,INFINITY,length);
  return result;
};

int main(void) {
  int list[] = {3,1,7,4,6,5,8,2};
  unsigned int length = sizeof(list)/sizeof(int); 
  List *numbers_list = split_in_range(list,4,7,length);
  display_numbers_list(numbers_list);
  free(numbers_list);
  return 0;
};
