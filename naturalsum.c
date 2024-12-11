#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter any number:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum of first natural number:%d",sum);
    return 0;
}