#include<stdio.h>
int main()
{
    int days;
    float fine;
    printf("Enter the number of days:");
    scanf("%d",&days);
    if (days>0 && days<=5)
    {
        fine=0.50*days;
    }
    if (days>=6 && days<=10)
    {
        fine=1*days;
    }
    if (days>=11 && days<30)
    {
        fine=5*days;
    }
    if (days>30)
    {
        printf("Your membership will be cancelled.\n");

    
    printf("You have to pay Rs. %2f fine.\n",fine);
    }
    
}