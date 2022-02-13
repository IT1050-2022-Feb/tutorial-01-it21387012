/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int subject1,subject2;
  int total;
   
  printf("enter subject1 marks : ");
  scanf("%d", &subject1);
   
  printf("enter subject2 marks : ");
  scanf("%d", &subject2);
   
  total = subject1 + subject2;
   
  float average = total/2.0;
   
  printf("%.2f",average);
   
  return 0;

}

