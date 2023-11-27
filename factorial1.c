#include<stdio.h>
int fact(int num);
int main()
{
    int num;
 printf("Enter the number for factorial:-\n");
 scanf("%d",&num);
 fact(num);
 printf("The factorial of %d is %d\n",num,fact(num));
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
    return 
    f= num*fact(num-1);
    
}