#include<stdio.h>
int main()
{
    int num;
    printf("Hello welcome to the program \n");

    printf("Enter the number ypou want to check:\n");
    scanf("%d",&num);
    if (num >0)
    { printf("Number is positive");
        
    }
    else if (num<0)
    {
    printf("Number is negative");
    }
    else{
        printf("the number is zero");
    }
return 0;

    

}