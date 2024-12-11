#include<stdio.h>
void main()
{
    int i,c,n,find;
    printf("Enter no. of element for an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d element to the array\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter integer to search:-\n");
    scanf("%d",&find);

    for ( i = 0; i < n; i++)
    {
        if (a[i]==find)
        {
        printf("%d found at position %d\n",find,i+1);
        break;

        }
        
    }
    
   if (i==n)
   {
    printf("Element not found!!");
   }
   
}