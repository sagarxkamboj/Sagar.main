#include<stdio.h>
int main()
{
    int num,i,j,a[100],temp,k;
    printf("Enter no. of elements for an array\n");
    scanf("%d",&num);
    printf("Enter %d integers into the array\n",num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( k = 0; k < num; k++)
    {
        for ( j = 0; j < num-k; j++)
        {
            if (a[j+1]<a[j])
            {
                temp = a[j+1];
                a[j+1] =a[j];
                a[j] = temp;
            }
            
        }
        
    }

    printf("Elements after sorting are:-\n");
    for ( i = 0; i < num; i++)
    {
       printf("%d\n",a[i]);
    }

    return 0;
    
    
    
}