#include<stdio.h>
struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main()
{
    struct personal person;
    printf("Input Values\n");
    scanf("%s%d%s%d%f",&person.name,&person.day,&person.month,&person.year,&person.salary);

    printf("%s\n%d\n%s\n%d\n%f\n",person.name,person.day,person.month,person.year,person.salary);
    
    
}
