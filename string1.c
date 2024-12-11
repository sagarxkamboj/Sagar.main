#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char str1[30];
    char str2[30];
    printf("Enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);
    while (1)
    {
        printf("Enter your choice from 1 to 6\n");
        printf("1.String length\n 2. String copy\n 3. String compare\n 4. String reverse\n 5.String concatenation\n 6. Exit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1: b=strlen(str1);
              printf("The length of string is %d\n",b);
            break;
        case 2:strcpy(str1,str2);
              printf("The copied string is %s\n",str1);
            break;
        case 3: b=strcmp(str1,str2);
        if (b==0)
        {
            printf("The string are same\n");
        }
        else
        {
            printf("The string are different\n");
        }
        break;
        case 4:strrev(str1);
        printf("The reverse of string is %s\n",str1);
        break;
        case 5:strcat(str1,str2);
        printf("The string is %s\n",str1);
        break;
        case 6: return 0;
        break;
        default:
        printf("you entered wrong number\n");

        }
    }
    
}