#include<stdio.h>
int main()
{
    int Year;
    printf("Enter the year you want to check:");
    scanf("%d",&Year);
    (Year%4==0&&Year%100!=0)?printf("Leap year"):(Year%400==0)?printf("Leap Year"):printf("Not a leap year");
    return 0;

}