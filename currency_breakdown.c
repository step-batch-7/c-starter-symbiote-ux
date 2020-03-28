#include<stdio.h>

int find_notes(int);

int find_notes(int money) {
  if( money > 2000) {
    int count = money / 2000;
    printf("%d X Rs 2000 \n", count);
  }
  int next_value = money % 2000;
  if(next_value > 500) {
    int count = next_value / 500;
    printf("%d X Rs 500 \n", count);
  }
  next_value = next_value % 500;
  if(next_value > 200) {
     int count = next_value / 200;
     printf("%d X Rs 200 \n", count);
  }
  next_value = next_value % 200;
  if(next_value > 100) {
     int count = next_value / 100;
      printf("%d X Rs 100 \n", count);
  }
  next_value = next_value % 100;
  if(next_value > 50) {
     int count = next_value / 50;
     printf("%d X Rs 50 \n", count);
  }
  next_value = next_value % 50;
  if(next_value > 10) {
     int count = next_value / 10;
     printf("%d X Rs 10 \n", count);
  }
  next_value = next_value % 10;
  if(next_value > 5) {
     int count = next_value / 5;
     printf("%d X Rs 5 \n", count);
  }
  next_value = next_value % 5;
  printf("%d X Rs 1 \n", next_value);
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