/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum;//declaring variable
  float average;
  
  printf("Enter the mark of the first subject:");//prompt
  scanf("%d", &mark1);//read input
  printf("Enter the mark of the second subject:");//prompt
  scanf("%d", &mark2);//read input
  average = (mark1 + mark2)/2;//calculation
  printf("average of the two subjects is: %.2f",average);//display the average
  
  return 0;
}// end function main

