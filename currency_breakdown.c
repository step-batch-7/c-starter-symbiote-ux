#include<stdio.h>

int find_notes(int);
int print_count(int ,int);

int print_count(int money , int value) {
  if( money > value) {
    int count = money / value;
    printf("%d X Rs %d \n",count,value);
  }
  return 0;
}

int find_notes(int money) {
  print_count(money, 2000);
  int money_left = money % 2000;
  print_count(money_left, 500);
  money_left = money_left % 500;
  print_count(money_left, 200);
  money_left = money_left % 200;
  print_count(money_left, 100);
  money_left = money_left % 100;
  print_count(money_left, 50);
  money_left = money_left % 50;
  print_count(money_left, 20);
  money_left = money_left % 20;
  print_count(money_left, 10);
  money_left = money_left % 10;
  print_count(money_left, 5);
  money_left = money_left % 5;
  print_count(money_left, 1);
  return 0;
}

int main() {
  int money;
  printf("Enter money for currency breakdown \n");
  scanf("%d", &money);
  printf("Number of notes of each denomination that make up the amount of %d \n", money);
  find_notes(money);
  return 0;
}