#include<stdio.h>

char is_even(int);
char is_odd(int);
int find_sqr(int);
int find_cube(int);
int find_gcd(int , int);

int find_gcd(int num1, int num2) {
  if(!num1) return num2;
  if(num1 == num2 || !num2 ) return num1;
  return num1 > num2 ? find_gcd(num1 - num2, num2) : find_gcd(num1, num2 -num1);
}

int find_cube(int num) {
  return find_sqr(num) * num;
}

int find_sqr(int num) {
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
  printf("Square of %d is %d \n", num, find_sqr(num));
  printf("Cube of %d is %d \n", num , find_cube(num));
  int num1 ,num2;
  printf("Enter two numbers\n");
  scanf("%d %d",&num1, &num2);
  printf("Greatest common divisor of %d and %d is %d",num1, num2, find_gcd(num1,num2));
  return 0;
}

