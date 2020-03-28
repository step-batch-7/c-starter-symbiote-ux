#include<stdio.h>

char is_even(int);
char is_odd(int);
int sqr(int);
int cube(int);

int cube(int num) {
  return sqr(num) * num;
}

int sqr(int num) {
  return num * num;
}

char is_odd(int num) {
  return !is_even(num);
}

char is_even(int num) {
  return !(num % 2);
}

int main() {
  int num;
  printf("Enter a number \n");
  scanf("%d",&num);
  printf("%s \n",is_even(num) ? "Even" : "Not Even");
  printf("%s \n", is_odd(num) ? "Odd" : "Not Odd");
  printf("Square of %d is %d \n", num, sqr(num));
  printf("Cube of %d is %d \n", num , cube(num));
  return 0;
}

