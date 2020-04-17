#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int **outer_array;
  unsigned int no_of_groups;
  unsigned int no_of_students;
} Two_Dim_Array;

int main() {
  Two_Dim_Array *step = malloc(sizeof(Two_Dim_Array));
  printf("Enter no groups\n");
  scanf("%d",&step->no_of_groups);
  step->outer_array = malloc(sizeof(int *) * step->no_of_groups);
  printf("Enter No of students in 1 group\n");
  scanf("%d",&step->no_of_students);
  for(int i = 0; i< step->no_of_groups; i++) {
    step->outer_array[i] = malloc(sizeof(int) * step->no_of_students);
  }
  printf("Enter numbers\n");
  for(int i = 0; i < step->no_of_groups; i++) {
    for(int j = 0; j <step->no_of_students; j++) {
      printf("Group %d Student No %d \n",i+1,j+1);
      scanf("%d",&step->outer_array[i][j]);
    }
  }
  printf("information\n");
  for(int i = 0; i < step->no_of_groups; i++) {
    for(int j = 0; j <step->no_of_students; j++) {
      printf("%d ",step->outer_array[i][j]);
    }
    printf("\n");
  }
  return 0;
}