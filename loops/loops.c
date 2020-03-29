#include<stdio.h>

int find_factorial(int);

int find_factorail(int num) {
  if(num == 0) return 1;
  return num * find_factorail( num -1);
}

int main() {
  int num;
  printf("Enter a number to find factorail \n");
  scanf("%d", &num);
  printf("Factorial of %d is %d \n",num, find_factorail(num));
  return 0;
}