#include<stdio.h>

int print_fibonacci(int *, int);

int print_fibonacci(int *array , int terms) {
  unsigned prev_term = -1 , next_term = 1,count = 0;
  while(count != terms) {
    unsigned curr_term = prev_term + next_term;
    prev_term = next_term;
    next_term = curr_term;
    array[count] = curr_term;
    count++;
  }
  return 0;
}

int main() {
  int terms;
  printf("Enter no of terms to print fibonacci series: \n");
  scanf("%d",&terms);
  int arr[terms];
  print_fibonacci(arr,terms);
  for(int i = 0; i < terms; i++) {
    printf("%d \n",arr[i]);
  }
  return 0;
}