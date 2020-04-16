#ifndef _EVEN_FILTER_H
#define _EVEN_FILTER_H

#define LENGTH sizeof(numbers)/ sizeof(numbers[0])
typedef struct {
  int *list;
  int length;
} Array;

Array filter_even(int numbers[], int length);

#endif