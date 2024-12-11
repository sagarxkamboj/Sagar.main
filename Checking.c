#include<stdio.h>
char main()
{
    char c;
    printf("Enter the Character");
    scanf("%c",&c);
    if ((c>='a'&& c<='z')||(c>='A' && c<='Z'))
    printf("Entered char is alphabet");
    else if (c>='0' && c<='9')
    printf("Entetred Char is digit");
    else 
    printf("Special symbols");
    
    
    
    
}
