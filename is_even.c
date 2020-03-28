#include<stdio.h>

int is_even();

int main() {
  is_even();
  return 0;
}

int is_even() {
  int num;
  printf("Enter a number \n");
  scanf("%d",&num);
  if(num % 2 == 0) {
    printf("Is Even");
    return 0;
  }
  else {
    printf("%d Not Even");
    return 1;
  }
}