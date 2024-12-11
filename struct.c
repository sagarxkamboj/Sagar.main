#include<stdio.h>
struct student
{
    char name[30];
    int  uid;
    int marks;
};

int main()
{
    struct student s1,s2,s3;
    
    
   printf("Enter details of students name,Uid,Marks\n");
   scanf("%s%d%d",&s1.name,&s1.uid,&s1.marks);
   printf("The values are %s %d %d\n",s1.name,s1.uid,s1.marks);

}