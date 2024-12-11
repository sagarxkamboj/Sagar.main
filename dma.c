#include<stdio.h>
#include<string.h>
void main()
{
    char*ptr;
    ptr=(char*)malloc(10);
    if (ptr==NULL)
    {
        printf("Malloc Failed\n");
        exit(1);
    }
    printf("Memory of size:%d created\n",msize(ptr));
    strcpy(ptr,"INITIAL");
    printf("\n string stored is %s\n",ptr);
    ptr=(char*)realloc(ptr,20);
    if (ptr==NULL)
    {
        printf("Reallocation failed\n");
        Exit(1);
    }
    printf("\nMemory size modified\n");
    printf("Memory still contain: %s\n",ptr);
    printf("Memory size changed to %d \n",msize(ptr));
    strcpy(ptr,"CHANGED-STRING");
    printf("\n String now stored is : %s \n",ptr);
    free(ptr);
    
    
}