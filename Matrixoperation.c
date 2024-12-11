#include<stdio.h>
int fact(int num);
int num()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  printf("The factorial of %d is %d",num,fact(num));
  return 0;
  
}
int fact(int num)
{
  int f;
  if (num==0)
  {
    return 1;
  }
  else
  f=num*fact(num-1);
  return f;
  
}