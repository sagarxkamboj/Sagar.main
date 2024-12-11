#include<stdio.h>
void main()
{
    int i,c,n,beg,mid,end,find;
    printf("Enter no. of element for an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d element to the array in sorted manner\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elementto find");
    scanf("%d",&find);
    beg =0;
    end=n-1;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if (a[mid]>find)
        {
            beg=mid-1;
        }
        else if (a[mid]<find)
        {
            beg=mid+1;
        }
        else if (a[mid]==find)
        {
            c=1;
            break;
        }
        
        
        
    }
    if (c==1)
    {
        printf("%d found at %d position",find,mid+1);
       
    }
    else
    printf("Element not found!!");
    
    
}