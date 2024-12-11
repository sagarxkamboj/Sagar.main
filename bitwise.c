/*
and
or 
xor
compliment
lrft shift 
right shift*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:-\n");
    scanf("%d%d",&a,&b);
    printf("First number you entered is %d\n",a);
    printf("Second number you entered is %d\n",b);
    printf("And operator:- %d\n",a&b);
    printf("Or operator:-%d\n",a|b);
    printf("Xor operator %d\n",a^b);
    printf("Compilment opertor %d\n",a=~a);
    printf("Left shift %d\n",b<<1);
    printf("Right shift %d\n",b>>1);
    return 0;

}

