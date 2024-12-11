#include<stdio.h>
int main()
{
   int Length, Breadth, area;
   printf("Enter length");
   scanf("%d", &Length);
   printf("Enter Breadth");
   scanf("%d", &Breadth);

   area=Length*Breadth;
   printf("Area of rectangle is %d", area);
   return 0;


}