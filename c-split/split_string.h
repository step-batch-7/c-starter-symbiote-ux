#ifndef _SPLIT_STRING_H_
#define _SPLIT_STRING_H_

#define SPLITTED_STRING splitted_string->outer_array[i]
#define RESULTED_STRING result->outer_array[turn]
typedef struct {
  char *array;
  unsigned int length;
} Splitted_Part;

typedef struct {
  Splitted_Part **outer_array;
  unsigned int length;
} Strings_Array;

Strings_Array *split_string(char *, char,unsigned int);
int save_string(Strings_Array *, Splitted_Part *,unsigned int );
void free_pointers(Strings_Array  *);
void print_splitted_string(Strings_Array *);

#endif