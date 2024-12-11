#include<stdio.h>
void main()
{
    int n,i,j,swap,pos;
    printf("Enter no. of element for the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers to the array\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        pos=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[pos]>a[j])
            {
                pos=j;
            }
            if (pos!=i)
            {
                swap = a[i];
                a[i]=a[pos];
                a[pos]=swap;
            }
            
            
        }
    }
        for ( i = 0; i < n; i++)
        {
            printf("%d\t",a[i]);
        }
        
        
    
    
}