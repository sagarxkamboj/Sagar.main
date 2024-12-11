#include<stdio.h>
void main()

{
  int n,i,j,c,search,beg,mid,end;
  printf("Enter no. of elements for the array:-");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d integers in sorted manner to the array\n",n);
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter element to search:-");
  scanf("%d",&search);
   beg=0;
   end=n-1;

  while (beg<=end)
  {
     mid=(beg+end)/2;
    if (search<a[mid]){
    
        beg=mid-1;}
        else if(search>a[mid]){
        
            beg=mid+1;}
            else if (search==a[mid]){
            
                c=1;
                break;
            }
            
        
    
    
  }
  if (c==1)
  {
    printf("Element found at position %d",mid+1);
  }
  else
  printf("Element not found!!");
  
  

  
}
