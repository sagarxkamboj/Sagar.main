#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int sum=0;
    printf("Enter 5 numbers to find average\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[5]);
        sum=sum+arr[i];
    }
    int avg=sum/5;
    printf("Average=%d\n",avg);
    return 0;
    
}