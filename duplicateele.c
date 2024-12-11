#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers to the array",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Duplicate elements array found are:-\n");
    for ( i = 0; i < n; i++)
    {
       for ( j = i+1; j<n; j++)
       {
        if (a[i]==a[i])
        {
            printf("%d\t",a[j]);
        }
        break;
        
       }
       
    }
    
    
}