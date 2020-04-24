#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int *array;
  unsigned int length;
} Sub_List;

typedef Sub_List *List;
typedef unsigned int Int;

void display_numbers_list(List *numbers_list) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < numbers_list[i]->length; j++) {
      printf("%d ",numbers_list[i]->array[j]);
    }
    printf("\n");
  }
};

Int *find_length(int *list,int from, int till,int length) {
  Int *count = calloc(3,sizeof(Int));
  for(int i = 0; i < length; i++) {
    if(list[i] < from) count[0]++;
    if(list[i] > till) count[2]++;
  }
  count[1] = length - (count[2] + count[0]);
  return count;
};

void assign_memory(List *result, Int *count) {
  for(int i = 0; i < 3; i++) {
    result[i] = malloc(sizeof(Sub_List));
    Int size = count[i] == 0 ? sizeof(int) : sizeof(int) * count[i];
    result[i]->array = malloc(size);
    result[i]->length = 0;
  }
}

List *split_in_range(int *list,int from,int till,unsigned int length) {
  List *result = malloc(sizeof(Sub_List *) * 3);
  Int *counts = find_length(list,from,till,length);
  assign_memory(result,counts);

  for(int i = 0; i < length; i++) {
    if(list[i] < from) {
      result[0]->array[result[0]->length] = list[i];
      result[0]->length++;
      continue;
    }
    if(list[i] > till) {
     result[2]->array[result[2]->length] = list[i];
     result[2]->length++; 
     continue;
    }
    result[1]->array[result[1]->length] = list[i];
    result[1]->length++;
  }
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


