#include<stdlib.h>
#include<stdio.h>
#include "split_string.h"

void free_pointers(Strings_Array  *splitted_string) {
  for(int i = 0; i < splitted_string->length; i++) {
    free(splitted_string->outer_array[i]->array);
    free(splitted_string->outer_array[i]);
  }
  free(splitted_string->outer_array);
  free(splitted_string);
};

void print_splitted_string(Strings_Array *splitted_string) {
  for(int i = 0; i < splitted_string->length; i++) {
    for(int j = 0; j < splitted_string->outer_array[i]->length; j++) {
      printf("%c",splitted_string->outer_array[i]->array[j]);
    }
    printf("\n");
  }
};

int save_string(Strings_Array *result, Splitted_Part *list,unsigned int turn) {
  result->outer_array[turn] = malloc(sizeof(Splitted_Part));
  result->outer_array[turn]->array = malloc(sizeof(char) * list->length);
  for(int i = 0; i < list->length; i++) {
    result->outer_array[turn]->array[i] = list->array[i];
  }
  result->outer_array[turn]->length = list->length;
  list->length = 0;
  result->length++;
  turn++;
  return turn;
};

Strings_Array *split_string(char *word, char separator,unsigned int length) {
  Strings_Array *result = malloc(sizeof(Strings_Array));
  result->outer_array = malloc(sizeof(char *) * length);
  Splitted_Part *list = malloc(sizeof(Splitted_Part));
  list->array = malloc(sizeof(char) * length); 
  unsigned int turn = 0;

  for(int i = 0; i < length; i++) {
    if(separator != word[i]) {
      list->array[list->length] = word[i];
      list->length++;
    } else {
      turn = save_string(result,list,turn);
      }
  }
  save_string(result,list,turn);
  free(list->array);
  free(list);
  return result;
};