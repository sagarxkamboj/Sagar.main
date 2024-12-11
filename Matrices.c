#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2],b[2][2],c[2][2],t[2][2];
    //Code for Addition of matrices
    printf("Enter first elements in matrix\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
            scanf("%d",&a[i][j]);
      }
    }
    printf("Enter elemnts of second matrices\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    //Code for Substraction
    printf("Enter first elements in matrix\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
            scanf("%d",&a[i][j]);
      }
    }
    printf("Enter elemnts of second matrices\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    //Code for transpose


    printf("Enter first elements in matrix\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
            scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",t[j][i]);
        }
    }
        printf("\n         ");
    
return 0;
}
