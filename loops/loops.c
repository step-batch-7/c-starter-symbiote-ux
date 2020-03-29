#include<stdio.h>

int find_factorial(int);
int print_fibonacci(int);
int print_odd_series(int);
int print_even_series(int);
int print_mul_table(int, int);
int sum_of_n_num(int);

int sum_of_n_num(int terms) {
  int index, sum = 0,num;
  for(index = 0; index < terms; index++) {
    scanf("%d",&num);
    sum += num;
  }
  return sum;
}

int print_mul_table(int num, int terms) {
  int count = 1;
  while(count <= terms) {
    printf("%d X %d = %d \n",num,count, num * count);
    count++;
  }
  return 0;
}

int print_even_series(int limit) {
  int start = 2;
  while(start <= limit) {
    printf("%d \n",start);
    start +=2;
  }
  return 0;
}

int print_odd_series(int limit) {
  int start = 1;
  while(start <= limit) {
    printf("%d \n",start);
    start += 2;
  }
  return 0;
}

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
  int limit;
  printf("Enter a number upto which you want to print all odd numbers from 1 \n");
  scanf("%d", &limit);
  printf("Odd series upto %d from 1 is :\n",limit);
  print_odd_series(limit);
  printf("Enter a number upto which you want to print all Even numbers from 1 \n");
  scanf("%d", &limit);
  printf("Odd series upto %d from 1 is :\n",limit);
  print_even_series(limit);
  printf("Enter a number and no of terms for which you want to print multiplication table \n");
  scanf("%d %d",&num,&limit);
  printf("Multiplication table for %d upto %d terms is : \n",num,limit);
  print_mul_table(num,limit);
  int terms;
  printf("Enter numbers of terms you want to add \n");
  scanf("%d",&terms);
  printf("Sum = %d \n",sum_of_n_num(num));
  return 0;
}