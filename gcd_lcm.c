#include<stdio.h>

int gcd(int , int);

int gcd(int num1, int num2) {
  if(num1 == num2 ) return num1;
  return num1 > num2 ? gcd(num1 - num2, num2) : gcd(num1, num2 -num1);
}

int main() {
  int num1 ,num2;
  printf("Enter two numbers\n");
  scanf("%d %d",&num1, &num2);
  printf("Greatest common divisor of %d and %d is %d",num1, num2, gcd(num1,num2));
  return 0;
}