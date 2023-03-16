/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,avg;

  printf("Enter subject 1 mark:");
  scanf("%f",&mark1);
  printf("Enter subject 2 marks:");
  scanf("%f",&mark2);

  avg=(mark1+mark2)/2;

  printf("Average of 2 subjects:%.2f",avg);
  
  
  return 0;
}

