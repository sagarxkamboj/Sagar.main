#include<stdio.h>
int main()
{
	int n,arr[100];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter %d elements:-\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Sorted array:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;

}