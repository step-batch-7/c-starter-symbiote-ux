#ifndef _EVEN_FILTER_H
#define _EVEN_FILTER_H

typedef struct {
  int *list;
  int length;
} Dynamic_Array;

Dynamic_Array * filter_even(int *, unsigned);

#endif