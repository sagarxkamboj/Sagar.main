#include<stdio.h>
void main()
{
    int num,temp;
    printf("Enter number of element:-");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d integers to the array\n",num);
    for (int  i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < num-1; i++)
    {
       for (int j = 0; j < num-i-1; j++)
       {
        if (arr[i]>arr[i+1])
        {
    
            arr[i]= temp;
            temp = arr[i+1];
            arr[i+1] = arr[i];
        }
        
       }
       
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    

}