#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter no. of element\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers to the array\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            if (a[j+1]<a[j])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("Elements after sorting are :-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}