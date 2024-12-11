//PLEASE RUN THIS CODE IN VS CODE FOR BETTER COMPILATION 
//OTHERWISE YOU CAN ALSO RUN ON ONLINE COMPILER 
#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float per;
    printf("Enter marks of 5 subjects:-\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("Your total marks are %d\n",sum);
    per=(a+b+c+d+e)/5;
    printf("your percentage is %f\n",per);
    if (90<per)
    {
        printf("Your grade is A+\n");
    }
    else if (80<per && 90>per)
    {
        printf("Your grade is B+\n");

    }
    else if (70<per && 80>per)
    {
        printf("Your grade is C+");
    }
    else
    printf("Failed!!!\n");
    return 0;
    
    

}