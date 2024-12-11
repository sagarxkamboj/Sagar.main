#include<stdio.h>
void main()
{
  int n,i,j,c;
  printf("Enter no. of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements to the array\n",n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  int find,pos;
  printf("Enter element to search in the array\n");
  scanf("%d",&find);
  for ( i = 0; i < n; i++)
  {
    if (a[i]==find)
    {
     c=1;
     pos=i+1;
     break;
    }
  }

    if (c==1)
    {
      printf("Element is found at position %d",i+1);
    }
    else
    
    printf("Element not found!!");
    
    
    
  
  
}