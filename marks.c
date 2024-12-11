#include<stdio.h>
int main()
{
    float a,b,c,d,e,percentage;
   
    printf("Enter marks of 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    percentage=(a+b+c+d+e)/5;
    if (percentage>=90)
    printf("Grade is A+");
    else if (percentage<=90 && percentage>=80)
    printf("Grade is B+");
    else if (percentage>=70 && percentage<=80)
    printf("Grade is C+");
    else if (percentage<=60 && percentage >=50)
    printf("Grdae is D");
    else
    printf("Fail");
    return 0;
    
    
    
    
    

}