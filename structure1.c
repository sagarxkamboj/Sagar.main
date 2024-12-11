#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    num= ((a>b&&a>c)?a:(b>a&&b>c)?b:c);
    printf("The numbers you enter are %d %d %d\n",a,b,c);
    printf("Ther greatestof three numbers are %d\n",num);
    return 0;
}