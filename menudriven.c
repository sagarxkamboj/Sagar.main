#include<stdio.h>
#include<math.h>
int main()
{
    int a,num,f;
    printf("Enter your choice from 1 to 4:-\n");
    printf("1. Number is even or odd\n 2. Positive or negative\n 3. Square root of a number\n 4. Square of a number\n");
    
    
        scanf("%d",&a);
        switch (a){
        case 1: 
        printf("Enter the number\n");
        scanf("%d",&num);
        if (num%2==0)
        {
            printf("The number is even\n");
        }
        else
        printf("Number is odd\n");
        break;
        case 2:
        printf("Enter the number\n");
        scanf("%d",&num);
        if (num>=0)
        {
            printf("Number is positive\n");
        }
        else
        printf("Number is negative\n");
        break;
        case 3:
        printf("Enter the number\n");
        scanf("%d",&num);
        f=sqrt(num);
        printf("Square root is %d",f);
        break;
        case 4:
        printf("Enter the number\n");
        scanf("%d",&num);
        f=num*num;
        printf("Square of the number is %d",f);
        break;
        default:
        printf("ok!\n");

       
        
    }
}