#include<stdio.h>

#include<string.h>

int main()

{

    int a,b;

    char str1[30];

    char str2[30];

    printf("Enter string 1: \n");

    gets(str1);

    printf("Enter string 2: \n");

    gets(str2);

 

    while(1)

    {

        printf("\n 1. String length\n 2. String Copy\n 3. String Comparison \n 4. String Concatenation \n 5. Reverse \n 6. Exit");

        printf("\nEnter the operation you wish to perform (1-6)\n");

        scanf("%d",&a);

        switch(a)

        {

            case 1: b=strlen(str1);

                    printf("\nLength of the string is %d.\n",b);

                    break;

            case 2: strcpy(str1,str2);

                    printf("\nCopied string is %s.\n",str1);

                    break;

            case 3: b=strcmp(str1,str2);

                    if(b==0)

                        printf("The strings are same.\n");

                    else

                        printf("The strings are different.\n");

                    break;

            case 4: strcat(str1,str2);

                    printf("\nConcatenated string is %s.\n",str1);

                    break;

            case 5: strrev(str1);

                    printf("\nConcatenated string is %s.\n",str1);

                    break;

            case 6: return 0;

            default: printf("You entered an invalid option.\n");

        }

    }

}