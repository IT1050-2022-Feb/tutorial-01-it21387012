/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{ // start main function

  int distance; //declaring variables
  int fullamount;
  int amount;
  int remaining;

  printf("enter the distance : ");
  scanf("%d", &distance);

  if(distance < 30)
  {
    fullamount = distance * 40;
    printf("full amount : %d",fullamount);
  }
  else if(distance == 30)
  {
    fullamount = distance * 50;
    printf("full amount : %d", fullamount);
  }
  else if(distance > 30)
  {
    remaining =((distance - 30 ) * 40);
    amount = 30 * 50;
    fullamount = remaining + amount;
    printf("full amount : %d",fullamount);
  }
  
  return 0;
} // end of the function