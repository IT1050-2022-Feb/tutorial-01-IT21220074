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

int main() {
 
  int distance,amount;// decalring variable
  
  printf("Enter the distance:"); //promt
  scanf("%d", &distance);//read input
  if(distance <= 30)//check the condition
  {
  	amount = distance * 50; //calculation
   printf("amount is %d",amount); //promt
  }
  else
  {
  	amount = (30*50) + (distance - 30)*40; //calculation
  	printf("amount is %d",amount); //display the  amount
  }
  return 0;
}//end function main 