#include<stdio.h>

int find_factorial(int);
int print_fibonacci(int);
int print_odd_series(int);
int print_even_series(int);
int print_mul_table(int,int);
int sum_of_n_num(int);
int product_of_n_num(int);
int print_odd_num_range(int,int);
int print_nth_num_range(int,int,int);
int sum_of_even_num_range(int, int);

int sum_of_even_num_range(int from, int upto) {
  int start = from, sum = 0;
  while(start <= upto) {
    if(start % 2==0) sum += start;
    start +=1;
  }
  return sum;
}

int print_nth_num_range(int from,int upto, int nth_num) {
  int start = from + nth_num;
  while(start <= upto) {
    printf("%d \n",start);
    start += nth_num;
  }
  return 0;
}

int print_odd_num_range(int from , int upto) {
  int start = from;
  while(start <= upto) {
    if(start % 2) printf("%d \n",start);
    start +=1;
  }
  return 0;
}

int product_of_n_num(int terms) {
  int index,num,product = 1;
  for(index = 0; index < terms; index++) {
    scanf("%d",&num);
    product *= num;
  }
  return product;
}

int sum_of_n_num(int terms) {
  int index,num,sum = 0;
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
  return print_odd_num_range(1,limit);
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
  printf("Enter numbers of terms you want to add \n");
  scanf("%d",&num);
  printf("Sum = %d \n",sum_of_n_num(num));
  printf("Enter numbers of terms you want product of them \n");
  scanf("%d",&num);
  printf("Product = %d \n",product_of_n_num(num));
  int from, upto;
  printf("Enter from where and upto which number you want to print odd numbers \n");
  scanf("%d %d",&from,&upto);
  printf("Odd numbers from %d upto %d are : \n");
  print_odd_num_range(from,upto);
  printf("Enter from where and upto and which nth number you want to print \n");
  scanf("%d %d %d", &from,&upto,&num);
  printf("Number series from %d to %d every %d th number \n", from, upto,num);
  print_nth_num_range(from,upto,num);
  printf("Enter from where and upto which number you want the sum of even numbers \n");
  scanf("%d %d",&from, &upto);
  printf("Sum of Even number series from %d upto %d is %d",from,upto,sum_of_even_num_range(from,upto));
  return 0;
}