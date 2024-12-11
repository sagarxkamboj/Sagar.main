#include<stdio.h>
int main()
{
    int a,b,c,Result;
    printf("Enter Three Number");
    scanf("%d%d%d",&a,&b,&c);
    Result = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("Greatest Number is:%d",Result);
    return 0;
}