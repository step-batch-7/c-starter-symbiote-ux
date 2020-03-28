#include<stdio.h>

int is_even(int);

int main() {
  int num;
  printf("Enter a number \n");
  scanf("%d",&num);
  is_even(num);
  return 0;
}

int is_even(int num) {
  if(num % 2 == 0) {
    printf("Is Even");
    return 0;
  }
  else {
    printf("Not Even");
    return 1;
  }
}