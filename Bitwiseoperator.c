#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers a and b:");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("And operator =%d\n",a&b);
    printf("Or operator=%d\n",a|b);
    printf("Xor operator=%d\n",a^b);
    printf("compliment operator %d\n",a= ~a);
    printf("left shift %d\n",b<<1);
    printf("Right shift %d\n",b>>1);
    return 0;
}