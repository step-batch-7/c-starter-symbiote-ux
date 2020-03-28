#include<stdio.h>

char is_even(int);
char is_odd(int);
int sqr(int);

int sqr(int num) {
  return num * num;
}

char is_odd(int num) {
  return !is_even(num);
}

char is_even(int num) {
  return num % 2==0;
}

int main() {
  int num;
  printf("Enter a number \n");
  scanf("%d",&num);
  printf("%s \n",is_even(num) ? "Even" : "Not Even");
  printf("%s \n", is_odd(num) ? "Odd" : "Not Odd");
  printf("Square of %d is %d", num, sqr(num));
  return 0;
}

