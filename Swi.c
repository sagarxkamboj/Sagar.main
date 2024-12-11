#include<stdio.h>
#include<math.h>
int main ()
{
    int n,n1,n2,n3,n4;
    float square;
    float ss;
    printf("Enter your choice from the following\n");
    printf("Case1---------Even or Odd\n");
    printf("Case2---------Positive or negative\n");
    printf("Case3---------Square of number\n");
    printf("Case4---------Square root of any number\n");
scanf("%d",&n);
switch (n)
{
    case 1:
    printf("Enter the value");
    scanf("%d",&n1);
    if(n1%2==0)
    printf("Entered Value is Even");
    else
    printf("Ëntered Value is Odd");
    break;




    case 2:
    printf("Enter the value");
    scanf("%d",&n2);
    if(n2>=0)
    printf("Value is positive");
    else 
    printf("Entered value is negative");
    break;

    


    case 3:
    printf("Enter the value");
    scanf("%d",&n3);
    square=(n3*n3);
    printf("Square of number is%f:",square);

    

    case 4:
    printf("Enter the value");
    scanf("%d",&n4);
    ss = sqrt(n4);
    printf("%f",ss);
    break;

default: 
printf("None of the condition is satisfied");
    break;
}
}
