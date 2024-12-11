#include<stdio.h>
int main()
{
    int p, r , t, si;
    printf("Enter Principal Value");
    scanf("%d",&p);
    printf("Enter Rate of interest");
    scanf("%d",&r);
    printf("Enter Time");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("The Si will be %d",si);
    return 0;
    

}