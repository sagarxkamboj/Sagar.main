#include<stdio.h>
int main()
{
    int a,m,mob;
    char name[30];
    printf("Please Enter your name.\n");
    scanf("%s",&name);
    printf(" %s Welcome to our restrourant!\n",name);
    printf("%s Enter your contact no.\n",name);
    scanf("%d",&mob);
    printf("please order from our meal options!\n");
    printf("Meal 1: Veg burger with coke.\n");
    printf("Meal 2: Pizza with garlic bread.\n");
    printf("Meal 3: Veg noodles.\n");
    printf("Meal 4: Chicken roll.\n");
    printf("Meal 5: Soya chaap.\n");
    do
    {
        scanf("%d",&a);
        switch (a)
        {
        case 1: 
            printf("Thanku for your order.\n");
            printf("Your order for Veg burger with coke will be there in 5 minutes.\n");
            printf("Your order no. is 3501\n");
            printf("Kindly check order no. in Order screen\n");
            break;
        
        case 2:
            printf("Thanku for your order.\n");
            printf("Your order for Pizza with garlic bread will be there in few minutes.\n");
            printf("Your order no. is 3502\n");
            printf("Kindly check order no. in Order screen\n");
            break;

        case 3:
            printf("Thanku for your order.\n");
            printf("Your order for Veg noodles will be there in 5 minutes.\n");
            printf("Your order no. is 3503\n");
            printf("Kindly check order no. in Order screen\n");   
            break;

        case 4:
            printf("Thanku for your order.\n");
            printf("Your order for chicken roll will be there in 5 minutes.\n");
            printf("Your order no. is 3504\n");
            printf("Kindly check order no. in Order screen\n");   
            break;

        case 5:
             printf("Thanku for your order.\n");
            printf("Your order for soya chaap will be there in 5 minutes.\n");
            printf("Your order no. is 3505\n");
            printf("Kindly check order no. in Order screen\n");    
            break;


        default:
             printf("Sorry for inconvienience..\n");
             printf("The meal you entered in not available at the moment...\n");
             break;
        }

        printf("Do you wnat to order another meal? \n ");
        printf("1: Yes\n");
        printf("2: NO\n");
        scanf("%d",&m);

    } 
    
    while (m<=1);
    printf("Thank u %s visit again!\n",name);
    printf("Your bill is sent on your contact no.!\n");
    printf("Please pay the bill online/offline its your choice!\n");
    
    

    
    



    
}