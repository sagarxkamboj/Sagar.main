#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter three number:-\n");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b&&a>c)?a : (b>a && b>c)?b :c;
    printf("The greatest of three number is %d",big);
    return 0;
}