#include<stdio.h>

int find_factorial(int);
int print_fibonacci(int);

int print_fibonacci(int num) {
  int prev_term = -1;
  int next_term = 1;
  int count = 0;
  while(count != num){
  int curr_term = prev_term + next_term;
  prev_term = next_term;
  next_term = curr_term;
  printf("%d \n",curr_term);
  count++;
  }
  return 0;
}

int find_factorail(int num) {
  if(num == 0) return 1;
  return num * find_factorail( num -1);
}

int main() {
  int num;
  printf("Enter a number to find factorial \n");
  scanf("%d", &num);
  printf("Factorial of %d is %d \n",num, find_factorail(num));
  int count;
  printf("Enter number of terms you want to print of Fibonacci series \n");
  scanf("%d",&count);
  printf("Fibonacci series upto %d terms is : \n",count);
  print_fibonacci(count);
  return 0;
}