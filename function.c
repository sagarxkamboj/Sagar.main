#include<stdio.h>
 int Factorial(int a);
int main()
{
    int a,f;
  printf("Enter the integer you want the factorial of!\n");
  scanf("%d",&a);
  f=Factorial(a);
  printf("The factorial of %d is %d",a,f);
  return 0;
}
 int Factorial(int a)
{
    int f;
    if (a==0&&a==1)
    {
        return 1;
    }
    else
    {
    f=(a*Factorial(a-1));
    return f;
    }
}