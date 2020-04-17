#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char **outer_array;
  unsigned int length;
} Strings_Array;

Strings_Array *split_string(char *, char,int);

Strings_Array *split_string(char *word, char separator,int length) {
  Strings_Array *result = calloc(1,sizeof(Strings_Array));
  result->outer_array = calloc( 2, sizeof(char *));
  for(int i = 0; i < 2; i++) {
    result->outer_array[i] = calloc(4,sizeof(char));
  }
  int j = 0;
  int turn = 0;
  for(int i = 0; i < length; i++) {
    if(separator != word[i]) {
      result->outer_array[turn][j] = word[i];
      j++;
    } else {
      turn++;
      j=0;
    }
  }
  return result;
}


int main(void) {
  char word[] = "student", separator = 'u';
  int length = sizeof(word)/sizeof(word[0]);
  Strings_Array *splitted_string =  split_string(word,separator,length);
  for(int i = 0; i < 2; i++) {
      printf("%s\n",splitted_string->outer_array[i]);
  }
  return 0;
}