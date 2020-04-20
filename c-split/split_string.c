#include<stdlib.h>
#include<stdio.h>
#include "split_string.h"

void free_pointers(Strings_Array  *splitted_string) {
  for(int i = 0; i < splitted_string->length; i++) {
    free(SPLITTED_STRING->array);
    free(SPLITTED_STRING);
  }
  free(splitted_string->outer_array);
  free(splitted_string);
};

void print_splitted_string(Strings_Array *splitted_string) {
  for(int i = 0; i < splitted_string->length; i++) {
    for(int j = 0; j < SPLITTED_STRING->length; j++) {
      printf("%c",SPLITTED_STRING->array[j]);
    }
    printf("\n");
  }
};

int save_string(Strings_Array *result, Splitted_Part *list,unsigned int turn) {
  RESULTED_STRING = calloc(1,sizeof(Splitted_Part));
  RESULTED_STRING->array = calloc(list->length,sizeof(char));
    for(int i = 0; i < list->length; i++) {
       RESULTED_STRING->array[i] = list->array[i];
      }
      RESULTED_STRING->length = list->length;
      list->length = 0;
      result->length++;
      turn++;
      return turn;
};

Strings_Array *split_string(char *word, char separator,unsigned int length) {
  Strings_Array *result = calloc(1,sizeof(Strings_Array));
  result->outer_array = calloc( length, sizeof(char *));
  Splitted_Part *list = calloc(1,sizeof(Splitted_Part));
  list->array = calloc(length,sizeof(char)); 
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