#include<stdio.h>
int main()

{
    int a,n;
    printf("Welcome to Our Restreunt\n");
    printf("Choose what you want to eat\n");
    printf("Meal1 ------ Veg N0odles\n");
    printf("Meal2------- Daal Makhni\n");
    printf("Meal3 ------ Snacks including Tea\n");
    printf("Meal4 ------- Cold Coffe\n");
    do
    {
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        printf("Your order for Veg noodles will be there in 5 minutes\n");
            break;
        case 2:
        printf("Your order for Daal Makhni will be there in 15 minutes\n");
        break;
        case 3:
        printf("Your order for Snacks including tea will be there in 5 minutes\n");
        break;
        case 4:
        printf("Your order for Cold coffe will be there in 5 minutes\n");
        break;
        default:
        printf("Meal not exist\n");
       
            break;
        }
        printf("Do you want to order another meal\n");
        printf("1. Yes\n");
        printf("2. No\n");
        scanf("%d",&n);
    } while (n<=1);
    printf("Thank you visit again\n");
        printf("See You next Time\n");
    return 0;

    






}