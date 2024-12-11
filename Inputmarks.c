#include<stdio.h>
int main()
{
    char name[30];
    int m,h,e,p,c;
    float per;
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Hello %s welcome\n");
    printf("%s Enter your marks for your 5 subjects\n",name);
    scanf("%d%d%d%d%d",&m,&h,&e,&p,&c);
    per=(m+h+e+p+c)/5;
    printf("%s your percentage is %f\n",name,per);
    if (per>=90)
    {
        printf("%s your grade is A+\n",name);

    }
    else if (90>per>80)
    {
        printf("%s your grade is B+\n",name);
    }
    else if (80>per>70)
    {
        printf("%s your grade is C+\n",name);
    }
    else  if (70>per>60)
    {
        printf("%s your grade is D+\n",name);
    }
    else
    
    printf("%s you are failed!!!",name);
    
    return 0;
    
    
}