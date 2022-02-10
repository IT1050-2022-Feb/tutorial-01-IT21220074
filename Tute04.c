/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(int x, int y);//function declarations
int minimum(int a, int b);
int multiply(int c,int d);
int main() {
   int no1, no2;//declaring variable
   printf("Enter a value for no 1 : ");//prompt
   scanf("%d", &no1);//read input
   printf("Enter a value for no 2 : ");//prompt
   scanf("%d", &no2);//read input
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int maximum(int x, int y)//function implementation
    {
	if(x>y)
  {
	
    return  x;
}
   	else
     {
	   
   	return y;
	
	}
}
int  minimum(int a, int b)//function implementation
    {
	if(a<b)
  {
	
    return  a;
}
   	else
     {
	   
   	return b;
	
	}
}
int multiply(int c, int d)//function implementation
{
	return c*d;
}
